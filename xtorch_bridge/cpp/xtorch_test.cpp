#include <torch/extension.h>
#include <torch/torch.h>
#include <xTorch/xtorch.h>

torch::Tensor xtorch_test() {
    return ;
}

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
    m.def("xtorch_test", &xtorch_test, "xtorch_test TEST");
}
