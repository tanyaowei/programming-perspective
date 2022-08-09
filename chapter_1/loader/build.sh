#!/bin/sh

g++ -L../../dependencies/shared/yaml-cpp -I../../dependencies/include  main.cpp -lyaml-cpp
export LD_LIBRARY_PATH=../../dependencies/shared/yaml-cpp:$LD_LIBRARY_PATH
./a.out
ldd ./a.out