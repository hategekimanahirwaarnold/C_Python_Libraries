from setuptools import Extension, setup

module = Extension("reverse", sources = ["reverse.c"])

setup(name="reverse",
      version="version 1.0",
      description="This is a module which reverses a string",
      ext_modules=[module])
