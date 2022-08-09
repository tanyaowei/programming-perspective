#include <iostream>
#include <cstdlib>

void func(int counter) {
    int local = 0;
    std::cout << "func()" << std::endl;
    std::cout << "local ptr: " << &local << std::endl;
    std::cout << "counter ptr: " << &counter << std::endl;
    std::cout << "frame ptr: " << __builtin_frame_address(0) << std::endl;
}

int main(int argc, char** argv)
{
    int counter = 0;
    std::cout << "main()" << std::endl;
    std::cout << "counter ptr: " << &counter << std::endl;
    std::cout << "frame ptr: " << __builtin_frame_address(0) << std::endl;
    func(counter);
    
    return 0;
}