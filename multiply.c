#include <Python.h>


int mult(int one, int two)
{
    return one * two;
};


static PyObject* multiply(PyObject* self, PyObject* args)
{
    int one, two;

    if(!PyArg_ParseTuple(args, "ii", &one, &two))
    {
        return NULL;
    }

    return Py_BuildValue("i", mult(one, two));
};

static PyObject* version (PyObject* self)
{
    return Py_BuildValue("s", "version 1.0");
}

static PyMethodDef myMethod[] = {
    {"mult", multiply, METH_VARARGS, "Multiply two numbers"},
    {"version", (PyCFunction)version, METH_NOARGS, "Return the version of multiply module"},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef multModule = {
    PyModuleDef_HEAD_INIT,
    "multiply",
    "Python interface for the Multiply library",
    -1,
    myMethod
};

PyMODINIT_FUNC PyInit_multiply (void)
{
    return PyModule_Create(&multModule);
}
