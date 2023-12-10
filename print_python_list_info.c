#include <Python.h>
#include <object.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
	long int size = PyList_Size(p), i;

	PyListObject *obj = (PyListObject *)p;
	printf("Size of python list = %lu\n", size);
	printf("Allocated = %zd\n", obj->allocated);
	for (i = 0; i < size; i++)
	{
		printf("Element %li: %s\n", i, Py_TYPE(obj->ob_item[i])->tp_name);
	}
}
