#include <pybind11/pybind11.h>
#include <xtorch/xtorch.h>

namespace py = pybind11;

PYBIND11_MODULE(xtorch_bridge, m) {
    m.doc() = "xtorch bridge pybind11 module";

    py::class_<xt::models::LeNet5>(m, "LeNet5")
        .def(py::init<int>())
        .def("forward", &xt::models::LeNet5::forward);

    py::class_<xt::Trainer>(m, "Trainer")
        .def(py::init<>())
        .def("set_max_epochs", &xt::Trainer::set_max_epochs)
        .def("fit", [](xt::Trainer& self, xt::models::LeNet5* model) {
            // Placeholder: real implementation should use valid dataloader
            // self.fit<>(model, dataloader);
        });
}