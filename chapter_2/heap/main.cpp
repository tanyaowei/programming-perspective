#include <iostream>
#include "../../dependencies/include/local/lib.h"

int main(int argc, char** argv)
{
    Object * obj = new Object();
    std::cout << "Ptr of *Object   : " << obj << std::endl;
    std::cout << "Ptr of *Object.a : " << &obj->a << std::endl;
    std::cout << "Ptr of *Object.b : " << (void*)&obj->b << std::endl;
    std::cout << "Ptr of *Object.c : " << &obj->c << std::endl;
    std::cout << "Ptr of *Object.d : " << &obj->d << std::endl;
    delete obj;
    return 0;
}