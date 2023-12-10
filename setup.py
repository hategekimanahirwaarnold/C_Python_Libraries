from setuptools import setup, Extension

module = Extension("multiply", sources=['multiply.c'])
setup(name="packageName",
      version="1.0",
      description="This is a multiply module",
      ext_modules=[module])
