#ifndef BLUR_C_H
#define BLUR_C_H

// Copyright 2016 Tom SF Haines

// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

//   http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.

#include <Python.h>
#include <structmember.h>

#ifndef __APPLE__
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#endif
#include <numpy/arrayobject.h>



// Helper struct - one per pixel...
typedef struct IncMean IncMean;

struct IncMean
{
 float mean[2];
 float weight[2]; 
};



// The modules only function...
static PyObject * Gaussian(PyObject * self, PyObject * args, PyObject * kw);



#endif