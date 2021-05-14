#
# Script made by Daniele Tentoni.
#
# Use this file to test the correctness of all c written files.
# Compile main program with all dependencies and run some useful operations.
#
# Copyright 2021 Daniele Tentoni
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

#!/bin/bash

echo "Test main.c program"

# Try to compile the program.
make clean
make
if [ $? -ne 0 ]; then
  echo "Make command failed to compile the program\n"
  exit
fi

# TODO: Check if main.exe file exists.

# Check the program ran without an input, discarding the output
./main.exe > main.error

# In this case, the result must be 1
if [ $? -ne 0 ]; then
  echo "All right! The return code is right"
else
  echo "There was an error. Check main.error file"
fi
