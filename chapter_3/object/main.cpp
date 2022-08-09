#include <iostream>
#include "../../shared/shared.h"

int main(int argc, char** argv)
{
    CharObj cobj;
    Object obj;
    Object * obj2 = new Object();

    std::cout << "Size of char      : " << sizeof(unsigned char) << std::endl;
    std::cout << "Size of short     : " << sizeof(unsigned short) << std::endl;
    std::cout << "Size of int       : " << sizeof(unsigned int) << std::endl;
    std::cout << "Size of long      : " << sizeof(unsigned long) << std::endl;
    std::cout << "Size of CharObj   : " << sizeof(CharObj) << std::endl;
    std::cout << "Size of Object    : " << sizeof(Object) << std::endl;
    std::cout << "Size of *Object2  : " << sizeof(obj2) << std::endl;
    std::cout << "Size of Object2   : " << sizeof(*obj2) << std::endl;
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
    std::cout << std::endl;
    std::cout << "Ptr of *Object2   : " << obj2 << std::endl;
    std::cout << "Ptr of *Object2.a : " << &obj2->a << std::endl;
    std::cout << "Ptr of *Object2.b : " << (void*)&obj2->b << std::endl;
    std::cout << "Ptr of *Object2.c : " << &obj2->c << std::endl;
    std::cout << "Ptr of *Object2.d : " << &obj2->d << std::endl;

    return 0;
}