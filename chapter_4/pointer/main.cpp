#include <iostream>

int main(int argc, char** argv)
{
    unsigned char arr[16] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    std::cout << "Size of pointer: " << sizeof(&arr) << std::endl;
    std::cout << std::endl;
    std::cout << "Value per unsigned char" <<  std::endl;
    // 0000 0001 = 1
    for(size_t i = 0; i < 16; ++i)
    {
        std::cout << (int) arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Value per unsigned short" <<  std::endl;
    unsigned short* short_arr = reinterpret_cast<unsigned short*>(&arr);
    // 0000 0001 0000 0001
    // 256 + 1 = 257
    for(size_t i = 0; i < 8; ++i)
    {
        std::cout << short_arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Value per unsigned int" <<  std::endl;
    unsigned int* int_arr = reinterpret_cast<unsigned int*>(&arr);

    // 0000 0001 0000 0001 0000 0001 0000 0001
    // 16777216 + 65536 + 256 + 1 = 16843009
    for(size_t i = 0; i < 4; ++i)
    {
        std::cout << int_arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}