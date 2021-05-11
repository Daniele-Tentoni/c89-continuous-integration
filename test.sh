#
# Script made by Daniele Tentoni.
#
# Use this file to test the correctness of all c written files.
# Compile main program with all dependencies and run some useful operations.
#

#!/bin/bash

echo "Test main.c program"

# TODO: Check if main.exe file exists.

# Check the program ran without an input, discarding the output
./main.exe > main.error

# In this case, the result must be 1
if [ $? -ne 0 ]; then
  echo "All right! The return code is right"
else
  echo "There was an error. Check main.error file"
fi
