import torch
from torch.utils.cpp_extension import load
import os

def load_xtorch_extension(name, source_path):
    module_path = os.path.abspath(source_path)
    module = load(name=name, sources=[module_path])
    return module
