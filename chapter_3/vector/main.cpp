#include <iostream>
#include <vector>
#include "../../shared/shared.h"


int main(int argc, char** argv)
{
    std::vector<int> b = {1,2};

    std::cout << "Vector B at init front - size: " << b.size() << " ptr: " << &*b.begin() << std::endl;
    std::cout << "Vector B at init back - size: " << b.size() << " ptr: " << &*b.rbegin() << std::endl;

    b.push_back(3);

    std::cout << "Vector B after 1 push front - size: " << b.size() << " ptr: " << &*b.begin() << std::endl;
    std::cout << "Vector B after 1 push back - size: " << b.size() << " ptr: " << &*b.rbegin() << std::endl;

    b.push_back(4);

    std::cout << "Vector B after 1 push front - size: " << b.size() << " ptr: " << &*b.begin() << std::endl;
    std::cout << "Vector B after 1 push back - size: " << b.size() << " ptr: " << &*b.rbegin() << std::endl;

    b.push_back(5);

    std::cout << "Vector B after 1 push front - size: " << b.size() << " ptr: " << &*b.begin() << std::endl;
    std::cout << "Vector B after 1 push back - size: " << b.size() << " ptr: " << &*b.rbegin() << std::endl;

    b.push_back(6);
    b.push_back(7);

    std::cout << "Vector B after 2 push front - size: " << b.size() << " ptr: " << &*b.begin() << std::endl;
    std::cout << "Vector B after 2 push back - size: " << b.size() << " ptr: " << &*b.rbegin() << std::endl;

    b.push_back(8);

    std::cout << "Vector B after 1 push front - size: " << b.size() << " ptr: " << &*b.begin() << std::endl;
    std::cout << "Vector B after 1 push back - size: " << b.size() << " ptr: " << &*b.rbegin() << std::endl;

    b.push_back(9);

    std::cout << "Vector B after 1 push front - size: " << b.size() << " ptr: " << &*b.begin() << std::endl;
    std::cout << "Vector B after 1 push back - size: " << b.size() << " ptr: " << &*b.rbegin() << std::endl;

    b.erase(++b.begin());

    std::cout << "Vector B after 1 remove front - size: " << b.size() << " ptr: " << &*b.begin() << std::endl;
    std::cout << "Vector B after 1 remove back - size: " << b.size() << " ptr: " << &*b.rbegin() << std::endl;

    return 0;
}