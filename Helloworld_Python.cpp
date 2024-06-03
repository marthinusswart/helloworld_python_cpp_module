#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include <vector>
#include <helloworld_lib.h>

namespace py = pybind11;

float multiply(float arg1, float arg2)
{
  return arg1 * arg2;
}

float addList(std::vector<float> values)
{
  float result = 0.0;
  for (const float &v : values)
  {
    result = result + v;
  }

  return result;
}

float addFloatsLib(float f1, float f2)
{
  return addFloats(f1, f2);
}

PYBIND11_MODULE(helloworld_python, module_handle)
{
  module_handle.doc() = "I'm a docstring";
  module_handle.def("multiply", &multiply);
  module_handle.def("add_list", &addList);
  module_handle.def("add_floats", &addFloatsLib);
}