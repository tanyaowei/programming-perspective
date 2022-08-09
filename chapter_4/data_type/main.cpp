#include <iostream>
#include "../../dependencies/include/local/lib.h"


struct TempObj
{
    short arr[3] = {1,2,3};
    int d = 4;
};

int main(int argc, char** argv)
{
    CharObj cobj[3];
    TempObj obj;

    std::cout << "Size of short    : " << sizeof(short) << std::endl;
    std::cout << "Size of int    : " << sizeof(int) << std::endl;
    std::cout << "Size of CharObj    : " << sizeof(CharObj) << std::endl;
    std::cout << "Size of CharObj[3]    : " << sizeof(cobj) << std::endl;
    std::cout << "Size of TempObj    : " << sizeof(TempObj) << std::endl;
    std::cout << "Size of TempObj.arr  : " << sizeof(obj.arr) << std::endl;
    std::cout << "Size of TempObj.d    : " << sizeof(obj.d) << std::endl;
    std::cout << std::endl;
    std::cout << "Ptr of TempObj      : " << &obj << std::endl;
    std::cout << "Ptr of TempObj.arr[0]   : " << &obj.arr[0] << std::endl;
    std::cout << "Ptr of TempObj.arr[1]   : " << &obj.arr[1] << std::endl;
    std::cout << "Ptr of TempObj.arr[2]   : " << &obj.arr[2] << std::endl;
    std::cout << "Ptr of TempObj.d              : " << &obj.d << std::endl;
    std::cout << std::endl;
    unsigned int* offset = reinterpret_cast<unsigned int*>(&obj) + 2;
    *offset = 8;
    std::cout << "Val of TempObj.d after    : " << obj.d << std::endl;
    std::cout << std::endl;
    std::cout << "Val of TempObj.arr[0]   : " << obj.arr[0] << std::endl;
    std::cout << "Val of TempObj.arr[1]   : " << obj.arr[1] << std::endl;
    std::cout << "Val of TempObj.arr[2]   : " << obj.arr[2] << std::endl;
    std::cout << "Val of TempObj.arr[3]   : " << obj.arr[3] << std::endl;
    std::cout << "Val of TempObj.arr[4]   : " << obj.arr[4] << std::endl;
    std::cout << "Val of TempObj.arr[5]   : " << obj.arr[5] << std::endl;
    std::cout << "Val of TempObj.d        : " << obj.d << std::endl;
    std::cout << std::endl;
    obj.arr[3] = 5;
    obj.arr[4] = 6;
    obj.arr[5] = 7;
    // int d = 458758
    // int = 32 bits or 4 bytes
    // 0000 0000, 0000 0111, 0000 0000, 0000 0110
    std::cout << "Val of TempObj.d after     : " << obj.d << std::endl;
    std::cout << std::endl;
    std::cout << "Val of TempObj.arr[0] after   : " << obj.arr[0] << std::endl;
    std::cout << "Val of TempObj.arr[1] after   : " << obj.arr[1] << std::endl;
    std::cout << "Val of TempObj.arr[2] after   : " << obj.arr[2] << std::endl;
    std::cout << "Val of TempObj.arr[3] after   : " << obj.arr[3] << std::endl;
    std::cout << "Val of TempObj.arr[4] after   : " << obj.arr[4] << std::endl;
    std::cout << "Val of TempObj.arr[5] after   : " << obj.arr[5] << std::endl;

    return 0;
}