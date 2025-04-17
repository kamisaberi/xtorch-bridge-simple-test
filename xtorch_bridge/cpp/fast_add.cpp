#include <torch/extension.h>
#include <xtorch/xtorch.h>

torch::Tensor fast_add(torch::Tensor a, torch::Tensor b) {
    return a + b;
}

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
    m.def("fast_add", &fast_add, "Fast Add (CPU)");
}
