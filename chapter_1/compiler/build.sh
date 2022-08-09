#!/bin/sh

g++ -E main.cpp -o main.i #out preprocessor content
g++ -S main.i #out assembly file
g++ -c main.s #out object file
g++ main.o #out executable file
