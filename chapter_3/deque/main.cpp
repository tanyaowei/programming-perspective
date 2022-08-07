#include <iostream>
#include <deque>
#include "../../shared/shared.h"


int main(int argc, char** argv)
{
    std::deque<int> c = {1,2};

    std::cout << "Deque C at init front - size: " << c.size() << " ptr: " << &*c.begin() << std::endl;
    std::cout << "Deque C at init back - size: " << c.size() << " ptr: " << &*c.rbegin() << std::endl;

    c.push_back(3);

    std::cout << "Deque C after 1 push front - size: " << c.size() << " ptr: " << &*c.begin() << std::endl;
    std::cout << "Deque C after 1 push back - size: " << c.size() << " ptr: " << &*c.rbegin() << std::endl;

    c.push_back(4);

    std::cout << "Deque C after 1 push front - size: " << c.size() << " ptr: " << &*c.begin() << std::endl;
    std::cout << "Deque C after 1 push back - size: " << c.size() << " ptr: " << &*c.rbegin() << std::endl;

    c.push_back(5);

    std::cout << "Deque C after 1 push front - size: " << c.size() << " ptr: " << &*c.begin() << std::endl;
    std::cout << "Deque C after 1 push back - size: " << c.size() << " ptr: " << &*c.rbegin() << std::endl;

    c.push_back(6);
    c.push_back(7);

    std::cout << "Deque C after 2 push front - size: " << c.size() << " ptr: " << &*c.begin() << std::endl;
    std::cout << "Deque C after 2 push back - size: " << c.size() << " ptr: " << &*c.rbegin() << std::endl;

    c.push_back(8);

    std::cout << "Deque C after 1 push front - size: " << c.size() << " ptr: " << &*c.begin() << std::endl;
    std::cout << "Deque C after 1 push back - size: " << c.size() << " ptr: " << &*c.rbegin() << std::endl;

    c.push_back(9);

    std::cout << "Deque C after 1 push front - size: " << c.size() << " ptr: " << &*c.begin() << std::endl;
    std::cout << "Deque C after 1 push back - size: " << c.size() << " ptr: " << &*c.rbegin() << std::endl;

    c.erase(++c.begin());

    std::cout << "Deque C after 1 remove front - size: " << c.size() << " ptr: " << &*c.begin() << std::endl;
    std::cout << "Deque C after 1 remove back - size: " << c.size() << " ptr: " << &*c.rbegin() << std::endl;

    return 0;
}