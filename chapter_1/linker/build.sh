#!/bin/sh

g++ -c -I../../dependencies/include  main.cpp
g++ main.o -L../../dependencies/static/yaml-cpp -lyaml-cpp
./a.out
ldd ./a.out