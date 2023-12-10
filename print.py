import ctypes

# Load the shared library
fact = ctypes.CDLL("./mymodule.so")

# Define the function argument and return types
fact.print_arguments.argtypes = [ctypes.py_object]
fact.print_arguments.restype = ctypes.py_object

# Prepare the arguments as a tuple of ctypes.c_int
args = (ctypes.c_int(10), ctypes.c_int(20))

# Call the C function with two integers
result = fact.print_arguments(args)
