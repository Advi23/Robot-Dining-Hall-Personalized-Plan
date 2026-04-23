import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/4_fri/bwi_ros2/install/scan_prox_filter'
