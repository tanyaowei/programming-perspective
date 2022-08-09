#include <iostream>
#include "../../shared/shared.h"

int main(int argc, char** argv)
{
    std::string str("哈");
    std::cout << "String content    : " << str << std::endl;
    std::cout << "String size       : " << str.size() << std::endl;
    std::cout << "String[0]         : " << (int)str[0] << std::endl;
    std::cout << "String[1]         : " << (int)str[1] << std::endl;
    std::cout << "String[2]         : " << (int)str[2] << std::endl;
    std::cout << std::endl;
    char str2[] = {-27,-109,-120};
    std::cout << "String2 content   : " << str2 << std::endl;
    std::cout << std::endl;
    // -27  = 11100101
    // -109 = 10010011
    // -120 = 10001000
    // 8950757 = 00000000 10001000 10010011 11100101
    unsigned int number = 8950757;
    char * str3 = reinterpret_cast<char*>(&number);
    std::cout << "String3 content   : " << str3 << std::endl;

    return 0;
}