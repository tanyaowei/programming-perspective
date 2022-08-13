#include <iostream>

#define circleArea(r) (3.1415*(r)*(r)) 

template<typename T>
T sum(T a, T b)
{
    return a + b;
}

int main(int argc, char** argv)
{
    std::cout << "hello world! " << circleArea(sum(5,5)) << std::endl;

    return 0;
}