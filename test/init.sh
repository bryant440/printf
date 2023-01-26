#!/bin/bash
# a scripts that compiles all the test case files

# copy the test file to the main directory
cp test/mai*.c .

# compiling the files with all flags
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o print_test

# run the code
./print_test

# delete the compiled file
rm print_test mai*.c
