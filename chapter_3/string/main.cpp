#include <iostream>
#include "../../dependencies/include/local/lib.h"


int main(int argc, char** argv)
{
    const char* str = "hello world!";
    std::string str2("hello world!");
    // c and c++ string uses null-termianting strings
    char str3[] = {'h','e','l','l','o',' ', 'w','o','r','l','d','!'};
    char str4[] = {'h','e','l','l','o',' ', 'w','o','r','l','d','!',0};

    std::cout  << "String Textarea: " << str << std::endl;
    std::cout  << "String Address: " << (void*) str << std::endl;
    std::cout << std::endl;
    std::cout  << "String Object: " << str2 << std::endl;
    std::cout  << "String Object Address: " << (void*) str2.c_str() << std::endl;
    std::cout << std::endl;
    str2 = "howhello world!";
    std::cout  << "String Object: " << str2 << std::endl;
    std::cout  << "String Object Address: " << (void*) str2.c_str() << std::endl;
    std::cout << std::endl;
    str2 = "how hello world!";
    std::cout  << "String Object: " << str2 << std::endl;
    std::cout  << "String Object Address: " << (void*) str2.c_str() << std::endl;
    std::cout << std::endl;
    std::cout  << "String Array: " << str3 << std::endl;
    std::cout  << "String Array Address: " << (void*) &str3 << std::endl;
    std::cout << std::endl;
    std::cout  << "String Array: " << str4 << std::endl;
    std::cout  << "String Array Address: " << (void*) &str4 << std::endl;
    std::cout << std::endl;
    str3[11] = 0;
    std::cout  << "String Array: " << str3 << std::endl;
    std::cout  << "String Array Address: " << (void*) &str3 << std::endl;
    std::cout << std::endl;
    std::cout  << "String Array: " << str4 << std::endl;
    std::cout  << "String Array Address: " << (void*) &str4 << std::endl;
    std::cout << std::endl;
    return 0;
}