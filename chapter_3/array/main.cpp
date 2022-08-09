#include <iostream>
#include "../../dependencies/include/local/lib.h"


int main(int argc, char** argv)
{
    short arr[3] = {1,2,3};
    CharObj cobj[3];
    CharObj* cobj2 = new CharObj[3];

    std::cout << "Size of short               : " << sizeof(short) << std::endl;
    std::cout << "Size of short arr[3]        : " << sizeof(arr) << std::endl;
    std::cout << "Size of CharObj             : " << sizeof(CharObj) << std::endl;
    std::cout << "Size of CharObj cobj[3]     : " << sizeof(cobj) << std::endl;
    std::cout << "Size of *CharObj2           : " << sizeof(cobj2) << std::endl;
    std::cout << "Size of CharObj2 cobj2[3]   : " << sizeof(*cobj2) << std::endl;
    std::cout << std::endl;
    std::cout << "Ptr of short arr            : " << &arr << std::endl;
    std::cout << "Ptr of short arr[0]         : " << &arr[0] << std::endl;
    std::cout << "Ptr of short arr[1]         : " << &arr[1] << std::endl;
    std::cout << "Ptr of short arr[2]         : " << &arr[2] << std::endl;
    std::cout << std::endl;
    std::cout << "Ptr of CharObj cobj         : " << &cobj << std::endl;
    std::cout << "Ptr of CharObj cobj[0]      : " << &cobj[0] << std::endl;
    std::cout << "Ptr of CharObj cobj[1]      : " << &cobj[1] << std::endl;
    std::cout << "Ptr of CharObj cobj[2]      : " << &cobj[2] << std::endl;
    std::cout << std::endl;
    std::cout << "Ptr of CharObj2 cobj2       : " << cobj2 << std::endl;
    std::cout << "Ptr of CharObj2 cobj2[0]    : " << &cobj2[0] << std::endl;
    std::cout << "Ptr of CharObj2 cobj2[1]    : " << &cobj2[1] << std::endl;
    std::cout << "Ptr of CharObj2 cobj2[2]    : " << &cobj2[2] << std::endl;
    
    delete[] cobj2;

    return 0;
}