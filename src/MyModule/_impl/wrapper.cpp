/// wrapper.cpp

#include "wrapper.h"

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
namespace py = pybind11;

PYBIND11_MODULE( _impl, m) {
  Binding(m);
}
