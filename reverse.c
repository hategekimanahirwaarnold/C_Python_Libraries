#include <Python.h>
#include <string.h>
#include <stdlib.h>

void strrev(char *str)
{
	int i = strlen(str) - 1;
    int k = i;
	int temp, j;

	for (j = 0; j < i; j++, i--)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
	}

	str[k + 1] = '\0';
};

static PyObject* reverse(PyObject* self, PyObject* args)
{
	char *str = NULL;

    if(!PyArg_ParseTuple(args, "s", &str))
    {
        return NULL;
    }

    strrev(str);
	return Py_BuildValue("s", str);
};


static PyObject* version (PyObject* self)
{
    return Py_BuildValue("s", "version 1.0");
}


static PyMethodDef revMethod[] = {
	{"reverse", reverse, METH_VARARGS, "Reverse the given string"},
    {"version", (PyCFunction)version, METH_NOARGS, "Return the version of multiply module"},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef revModule = {

	PyModuleDef_HEAD_INIT,
	"reverse",
	"reverse string",
	-1,
	revMethod
};


PyMODINIT_FUNC PyInit_reverse(void)
{
	return PyModule_Create(&revModule);
};

