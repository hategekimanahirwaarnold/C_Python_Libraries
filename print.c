#include <Python.h>

PyObject* print_arguments(PyObject* self, PyObject* args) {
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("%d\n", args[i]);
    }
    return Py_None;
}
