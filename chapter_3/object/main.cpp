#include <iostream>
#include "../../dependencies/include/local/lib.h"

int main(int argc, char** argv)
{
    CharObj cobj;
    Object obj;

    std::cout << "Size of char      : " << sizeof(unsigned char) << std::endl;
    std::cout << "Size of short     : " << sizeof(unsigned short) << std::endl;
    std::cout << "Size of int       : " << sizeof(unsigned int) << std::endl;
    std::cout << "Size of long      : " << sizeof(unsigned long) << std::endl;
    std::cout << "Size of CharObj   : " << sizeof(CharObj) << std::endl;
    std::cout << "Size of Object    : " << sizeof(Object) << std::endl;
    std::cout << std::endl;
    std::cout << "Ptr of CharObj    : " << &cobj << std::endl;
    std::cout << "Ptr of CharObj.a  : " << (void*)&cobj.a << std::endl;
    std::cout << "Ptr of CharObj.b  : " << (void*)&cobj.b << std::endl;
    std::cout << "Ptr of CharObj.c  : " << (void*)&cobj.c << std::endl;    
    std::cout << std::endl;
    std::cout << "Ptr of Object     : " << &obj << std::endl;
    std::cout << "Ptr of Object.a   : " << &obj.a << std::endl;
    std::cout << "Ptr of Object.b   : " << (void*)&obj.b << std::endl;
    std::cout << "Ptr of Object.c   : " << &obj.c << std::endl;
    std::cout << "Ptr of Object.d   : " << &obj.d << std::endl;

    return 0;
}