#include <iostream>

template<typename T1, typename T2>
T2 sum(T1 a, T2 b)
{
    return static_cast<T2>(a) + b;
}

int main(int argc, char** argv)
{
    std::cout << sum(1,1.0) << " hello world! " << sum(5.0f,5) << std::endl;

    return 0;
}