#ifndef PYM_UTILS_H
#define PYM_UTILS_H

#include <jsapi.h>
#include <Python/Python.h>

extern PyObject *PYM_error;

extern PyObject *
PYM_jsvalToPyObject(jsval value);

#endif
