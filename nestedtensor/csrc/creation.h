#pragma once
#include <python_nested_tensor.h>

namespace torch {
namespace nested_tensor {

THPNestedTensor as_nested_tensor(pybind11::sequence list);

_BufferNestedTensor make_contiguous(TensorNode structure);

} // namespace nested_tensor
} // namespace torch
