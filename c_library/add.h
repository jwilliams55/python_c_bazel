#pragma once

#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject *add_module(PyObject *self, PyObject *args) {
  int num1, num2;
  int retval;

  if (!PyArg_ParseTuple(args, "ii", &num1, &num2)) {
    return NULL;
  }

  return PyLong_FromLong(num1 + num2);
}

static PyMethodDef BasicMethods[] = {
    {"add", add_module, METH_VARARGS, "Add numbers"},
    {NULL, NULL, 0, NULL},
};

static struct PyModuleDef basic_module = {
    PyModuleDef_HEAD_INIT, "basic", NULL, -1, BasicMethods,
};

PyMODINIT_FUNC PyInit_basic(void) { return PyModule_Create(&basic_module); }
