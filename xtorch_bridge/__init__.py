from xtorch_bridge.loader import load_xtorch_extension

# Load the native extension
fast_add = load_xtorch_extension("fast_add", "xtorch_bridge/cpp/fast_add.cpp").fast_add
xtorch_test = load_xtorch_extension("xtorch_test", "xtorch_bridge/cpp/xtorch_test.cpp").xtorch_test
