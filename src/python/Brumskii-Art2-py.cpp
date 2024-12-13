#include <Brumskii-Art2/Brumskii-Art2.hpp>
#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(BrumskiiArt2, m){
    py::class_<BrumskiiArt2::Art>(m, "Art")
        .def(py::init<const int &>())
        .def("ArtOne", &BrumskiiArt2::Art::ArtOne)
        .def("ArtTwo", &BrumskiiArt2::Art::ArtTwo)
        .def("ArtThree", &BrumskiiArt2::Art::ArtThree);
}