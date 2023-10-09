#include <stdio.h>
#include <listobject.h>
#include <Python.h>

/**
* print_python_list_info - Prints basic info about a Python list
* @p: pointer to a python object
*/

void print_python_list_info(PyObject *p)
{
	Py_ssize_t size, alloc, s;
	PyObject *object;

	size = PyList_Size(p);
	alloc = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", alloc);

	for (s = 0; s < size; s++)
	{
		object = PyList_GetItem(p, s);
		printf("Element %ld: %s\n", s, Py_TYPE(object)->tp_name);
	}
}
