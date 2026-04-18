document.addEventListener('DOMContentLoaded', () => {

    const supabaseUrl = 'https://zvstwghosiivbvucjlzx.supabase.co';
    const supabaseKey = 'sb_publishable_CLuDIL1qA0Cl6sO9c0679A_nsL5bXIG';
    const supabase = window.supabase.createClient(supabaseUrl, supabaseKey);

    let currentPage = 1;
    const totalPages = 4;

    const pages = document.querySelectorAll('.form-page');
    const nextBtn = document.getElementById('next-btn');
    const prevBtn = document.getElementById('prev-btn');
    const submitBtn = document.getElementById('submit-btn');
    const progressBar = document.getElementById('progress-bar');
    const stepIndicator = document.getElementById('step-indicator');
    const form = document.getElementById('dining-form');
    const completionView = document.getElementById('completion-view');
    const jsonOutput = document.getElementById('json-output');
    const errorToast = document.getElementById('error-toast');

    let toastTimeout;

    function showToast(message) {
        errorToast.textContent = message;
        errorToast.classList.add('show');
        clearTimeout(toastTimeout);
        toastTimeout = setTimeout(() => {
            errorToast.classList.remove('show');
        }, 3000);
    }

    function updateProgress() {
        const percentage = (currentPage / totalPages) * 100;
        progressBar.style.width = `${percentage}%`;
        stepIndicator.textContent = `Step ${currentPage} of ${totalPages}`;

        // Hide/Show navigation buttons
        if (currentPage === 1) {
            prevBtn.style.display = 'none';
        } else {
            prevBtn.style.display = 'inline-block';
        }

        if (currentPage === totalPages) {
            nextBtn.style.display = 'none';
            submitBtn.style.display = 'inline-block';
        } else {
            nextBtn.style.display = 'inline-block';
            submitBtn.style.display = 'none';
        }

        // Update pages display
        pages.forEach((page, index) => {
            if (index + 1 === currentPage) {
                page.classList.add('active');
            } else {
                page.classList.remove('active');
            }
        });
    }

    function validatePage(pageNumber) {
        const page = document.getElementById(`page-${pageNumber}`);
        const groups = page.querySelectorAll('.question-group');
        let isValid = true;

        groups.forEach(group => {
            // Check for options grid
            const grid = group.querySelector('.options-grid');
            if (grid) {
                const selected = grid.querySelectorAll('.option-btn.selected');
                if (selected.length === 0) {
                    isValid = false;
                } else {
                    // Check if "other" is selected, require text input
                    const hasOtherSelected = Array.from(selected).some(btn => btn.classList.contains('has-other'));
                    if (hasOtherSelected) {
                        const input = group.querySelector('.other-text-input');
                        if (input && input.value.trim() === '') {
                            isValid = false;
                        }
                    }
                }
            }

            // Check for text areas
            const textArea = group.querySelector('.text-area-input');
            if (textArea) {
                if (textArea.value.trim() === '') {
                    isValid = false;
                }
            }
        });

        return isValid;
    }

    // Next/Prev Buttons
    nextBtn.addEventListener('click', () => {
        if (validatePage(currentPage)) {
            if (currentPage < totalPages) {
                currentPage++;
                updateProgress();
            }
        } else {
            showToast('Please answer all questions before proceeding.');
        }
    });

    prevBtn.addEventListener('click', () => {
        if (currentPage > 1) {
            currentPage--;
            updateProgress();
        }
    });

    // Handle Option Selection
    const optionGrids = document.querySelectorAll('.options-grid');

    optionGrids.forEach(grid => {
        const isMulti = grid.classList.contains('multi-select');
        const isSingle = grid.classList.contains('single-select');
        const buttons = grid.querySelectorAll('.option-btn');
        const otherInputContainer = grid.parentElement.querySelector('.other-input-container');
        const logicNoneBtn = grid.querySelector('.logic-none');

        buttons.forEach(btn => {
            btn.addEventListener('click', () => {
                const isLogicNone = btn.classList.contains('logic-none');

                if (isSingle) {
                    // Deselect all others
                    buttons.forEach(b => b.classList.remove('selected'));
                    btn.classList.add('selected');
                } else if (isMulti) {
                    if (isLogicNone) {
                        // If "None" is clicked, deselect all other buttons
                        if (!btn.classList.contains('selected')) {
                            buttons.forEach(b => b.classList.remove('selected'));
                            btn.classList.add('selected');
                        } else {
                            btn.classList.remove('selected');
                        }
                    } else {
                        // If another button is clicked, deselect "None"
                        btn.classList.toggle('selected');
                        if (logicNoneBtn) {
                            logicNoneBtn.classList.remove('selected');
                        }
                    }
                }

                // Toggle "Other" input visibility
                const hasOtherSelected = Array.from(buttons).some(b => b.classList.contains('selected') && b.classList.contains('has-other'));
                if (otherInputContainer) {
                    if (hasOtherSelected) {
                        otherInputContainer.classList.add('active');
                        // focus on input
                        const input = otherInputContainer.querySelector('input');
                        if (input) setTimeout(() => input.focus(), 300);
                    } else {
                        otherInputContainer.classList.remove('active');
                        // Optional: clear text input if unselected
                    }
                }
            });
        });
    });

    // Form submission processing
    submitBtn.addEventListener('click', async () => {
        if (!validatePage(currentPage)) {
            showToast('Please answer all questions before proceeding.');
            return;
        }

        const formData = {};
        const groups = document.querySelectorAll('.question-group');

        groups.forEach(group => {
            const grid = group.querySelector('.options-grid');
            if (grid) {
                const name = grid.getAttribute('data-name');
                const selectedBtns = grid.querySelectorAll('.option-btn.selected');

                let selectedValues = Array.from(selectedBtns).map(btn => {
                    const val = btn.getAttribute('data-value');
                    if (btn.classList.contains('has-other')) {
                        const input = group.querySelector('.other-text-input');
                        if (input && input.value.trim() !== '') {
                            return `Other: ${input.value.trim()}`;
                        }
                    }
                    return val;
                });

                if (grid.classList.contains('single-select')) {
                    formData[name] = selectedValues[0] || null;
                } else {
                    formData[name] = selectedValues;
                }
            }

            const textArea = group.querySelector('.text-area-input');
            if (textArea) {
                const name = textArea.getAttribute('name');
                formData[name] = textArea.value.trim();
            }
        });

        // Hide form elements and show completion view
        form.style.display = 'none';
        document.querySelector('.header').style.display = 'none';

        try {
            const { data, error } = await supabase
                .from('dining_preferences')
                .insert([
                    { form_data: formData }
                ]);
            if (error) throw error;

            // Output the JSON string and confirm success
            jsonOutput.textContent = JSON.stringify(formData, null, 4) + "\n\n✅ Data successfully saved to Supabase!";
        } catch (error) {
            console.error("Error saving to Supabase:", error);
            jsonOutput.textContent = JSON.stringify(formData, null, 4) + "\n\n❌ Error saving data: " + error.message;
        }
    });
});
