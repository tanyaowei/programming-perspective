#include <iostream>

int counter3 = 0;

void print()
{
    int counter = 0;
    std::cout << counter++ << std::endl;
}

void print2()
{
    static int counter2 = 0;
    std::cout << counter2++ << std::endl;
}


void print3()
{
    std::cout << counter3++ << std::endl;
}

int main(int argc, char** argv)
{
    for(size_t i = 0; i < 3; ++i)
    {
        std::cout << "Loop " << i << std::endl;
        print();
        print2();
        print3();
    }
    return 0;
}