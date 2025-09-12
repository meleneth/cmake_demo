#!/usr/bin/bash

set -euo pipefail

for i in 01_simple_compile 02_object_compile; do
  cd $i
  make
  cd -
done
for i in 03_simple_cmake 04_lib_based_cmake 05_cmake_with_deps 06_cmake_with_tests; do
  mkdir -p $i/build
  cd $i/build
  cmake ..
  cmake --build . --parallel
  cd -
done
