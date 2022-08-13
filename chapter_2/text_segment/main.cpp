#include <iostream>
#include <fstream>

const char* get_msg()
{
    const char* result = "hello world";
    std::cout << (void*) result << std::endl;
    return result;
}

int main(int argc, char** argv)
{
    const char* result = get_msg();
    std::cout << (void*) result << std::endl;
    return 0;
}