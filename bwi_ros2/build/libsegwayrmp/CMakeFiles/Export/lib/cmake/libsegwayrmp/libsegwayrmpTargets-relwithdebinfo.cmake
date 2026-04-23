#----------------------------------------------------------------
# Generated CMake target import file for configuration "RELWITHDEBINFO".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "libsegwayrmp::libsegwayrmp" for configuration "RELWITHDEBINFO"
set_property(TARGET libsegwayrmp::libsegwayrmp APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(libsegwayrmp::libsegwayrmp PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "Qt5::Core;Qt5::Widgets;Boost::system;Boost::thread"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/liblibsegwayrmp.so"
  IMPORTED_SONAME_RELWITHDEBINFO "liblibsegwayrmp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS libsegwayrmp::libsegwayrmp )
list(APPEND _IMPORT_CHECK_FILES_FOR_libsegwayrmp::libsegwayrmp "${_IMPORT_PREFIX}/lib/liblibsegwayrmp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
