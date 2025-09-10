This codebase is walking through the stages of 'simple compile' to 'complicated makefile' to 'but just use cmake'

for more info about compiler flags, check out https://caiorss.github.io/C-Cpp-Notes/compiler-flags-options.html

01_simple_compile
make builds some_program, make_clean removes some_program

02_object_compile
make builds object files for the source files, and dependancy files.
Interesting here is if you touch secondary.cpp and run make, secondary.o and some_program will be built.
If you touch secondary.hpp and run make, secondary.cpp, main.cpp will both be built, and then some_program will be linked.

03_simple_cmake

mkdir build
cd build
cmake ..
cmake --build . --verbose

to rebuild, just
cmake --build .

04_lib_based_cmake
build instructions same as 03_simple_cmake

05_cmake_with_deps
build instructions same as 03_simple_cmake

./some_program
./some_program -d

06_cmake_with_tests
build instructions same as 03_simple_cmake

./tests/sp_test

