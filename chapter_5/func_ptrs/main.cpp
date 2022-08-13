#include <iostream>
#include <string>
#include <vector>
#include "../../dependencies/include/local/lib.h"

int one_plus_input(int input)
{
    return 1 + input;
}

int main(int argc, char** argv)
{
    int (*func1)(int) = &one_plus_input;

    std::cout << "print func1: " << func1(2) << std::endl;

    std::vector<Object> obj_list(3);

    int(Object::* func2)() = &Object::get_a;
    int(* func3)() = &Object::get_e;

    for(size_t i = 0; i < obj_list.size(); ++i)
    {
        std::cout << "print func2: " << (obj_list[i].*func2)() << std::endl;
        std::cout << "print func3: " << func3() << std::endl;
        std::cout << std::endl;
    }

    return 0;
}