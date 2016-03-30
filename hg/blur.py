# Copyright 2016 Tom SF Haines

# Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

#   http://www.apache.org/licenses/LICENSE-2.0

# Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.

# Compile the code if need be...
from utils.make import make_mod
import os.path

make_mod('blur_c', os.path.dirname(__file__), ['blur_c.h', 'blur_c.c'], numpy=True)

del make_mod



# Import the code...
from blur_c import *
