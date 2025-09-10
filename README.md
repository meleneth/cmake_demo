# C++ Build Progression: From `g++` to CMake

This repository walks through the stages of building a simple C++ program:

1. **Direct compile with `g++`**
2. **Manual Makefile**
3. **Object files with dependencies**
4. **Simple CMake setup**
5. **CMake with libraries**
6. **CMake with dependencies**
7. **CMake with tests**

The idea is to start with the most basic command and progress toward more maintainable build systems.

For more information about compiler flags, see:  
<https://caiorss.github.io/C-Cpp-Notes/compiler-flags-options.html>

---

## 01_simple_compile
- `make` builds `some_program` directly from source files.  
- `make clean` removes the executable.

---

## 02_object_compile
- `make` builds object files for each source file and also generates dependency files.  
- Behavior:
  - If you touch `secondary.cpp` and run `make`, it rebuilds `secondary.o` and relinks `some_program`.  
  - If you touch `secondary.hpp` and run `make`, it rebuilds both `secondary.cpp` and `main.cpp`, then relinks `some_program`.

---

## 03_simple_cmake
```bash
mkdir build
cd build
cmake ..
cmake --build . --verbose
```

To rebuild:
```bash
cmake --build .
```

---

## 04_lib_based_cmake
Build instructions are the same as **03_simple_cmake**.

---

## 05_cmake_with_deps
Build instructions are the same as **03_simple_cmake**.

Run:
```bash
./some_program
./some_program -d
```

---

## 06_cmake_with_tests
Build instructions are the same as **03_simple_cmake**.

Run tests:
```bash
./tests/sp_test
```

