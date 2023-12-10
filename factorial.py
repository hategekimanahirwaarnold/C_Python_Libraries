import ctypes

fact = ctypes.CDLL('./factorial_extension.so')
print(fact.calculate_factorial(6))
