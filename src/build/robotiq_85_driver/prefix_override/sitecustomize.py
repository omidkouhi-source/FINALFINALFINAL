import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/omid/data/colcon_ws1FW/src/final_work/src/install/robotiq_85_driver'
