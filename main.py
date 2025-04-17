import torch
from xtorch_bridge import fast_add

a = torch.tensor([1.0, 2.0, 3.0])
b = torch.tensor([4.0, 5.0, 6.0])

c = fast_add(a, b)
print("Result from native C++:", c)
