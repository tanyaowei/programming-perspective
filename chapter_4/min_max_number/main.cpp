#include <iostream>
#include <limits>
#include <bitset>
#include "../../dependencies/include/local/lib.h"

int main(int argc, char** argv)
{
    unsigned char number = 255;

    std::cout << "when a number of 1 byte (8bits) max out" << std::endl;
    std::cout << (int) number << std::endl;
    std::cout << std::endl;
    number +=1;
    std::cout << "when a number of 1 byte (8bits) overshot" << std::endl;
    std::cout << (int) number << std::endl;
    std::cout << std::endl;
    std::cout << "bitset char min" << std::endl;
    std::bitset<8> min_char(std::numeric_limits<char>::min());
    std::cout << min_char.to_string() << std::endl;
    std::cout << std::endl;
    std::cout << "bitset char max" << std::endl;
    std::bitset<8> max_char(std::numeric_limits<char>::max());
    std::cout << max_char.to_string() << std::endl;
    std::cout << std::endl;
    std::cout << "bitset char -127" << std::endl;
    std::bitset<8> val_char(-127);
    std::cout << val_char.to_string() << std::endl;
    std::cout << std::endl;
    std::cout << "bitset char -1" << std::endl;
    std::bitset<8> val_char2(-1);
    std::cout << val_char2.to_string() << std::endl;
    std::cout << std::endl;
    std::cout << "bitset char 1111 1111" << std::endl;
    std::bitset<8> char_bit(std::string("11111111"));
    char val_num = char_bit.to_ulong();
    std::cout << (int)val_num << std::endl;
    std::cout << std::endl;
    std::cout << "min and max of char" << std::endl;
    std::cout << (int)std::numeric_limits<char>::min() << std::endl;
    std::cout << (int)std::numeric_limits<char>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "min and max of unsigned char" << std::endl;
    std::cout << (int)std::numeric_limits<unsigned char>::min() << std::endl;
    std::cout << (int)std::numeric_limits<unsigned char>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "min and max of short" << std::endl;
    std::cout << std::numeric_limits<short>::min() << std::endl;
    std::cout << std::numeric_limits<short>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "min and max of unsigned short" << std::endl;
    std::cout << std::numeric_limits<unsigned short>::min() << std::endl;
    std::cout << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "min and max of int" << std::endl;
    std::cout << std::numeric_limits<int>::min() << std::endl;
    std::cout << std::numeric_limits<int>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "min and max of unsigned int" << std::endl;
    std::cout << std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "min and max of long" << std::endl;
    std::cout << std::numeric_limits<long>::min() << std::endl;
    std::cout << std::numeric_limits<long>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "min and max of unsigned long" << std::endl;
    std::cout << std::numeric_limits<unsigned long>::min() << std::endl;
    std::cout << std::numeric_limits<unsigned long>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "min and max of float" << std::endl;
    std::cout << std::numeric_limits<float>::min() << std::endl;
    std::cout << std::numeric_limits<float>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "min and max of double" << std::endl;
    std::cout << std::numeric_limits<double>::min() << std::endl;
    std::cout << std::numeric_limits<double>::max() << std::endl;

    return 0;
}