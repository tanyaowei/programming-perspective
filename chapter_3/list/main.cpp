#include <iostream>
#include <list>
#include "../../shared/shared.h"


int main(int argc, char** argv)
{
    std::list<int> a = {1,2};

    std::cout << "List A at init front - size: " << a.size() << " ptr: " << &*a.begin() << std::endl;
    std::cout << "List A at init back - size: " << a.size() << " ptr: " << &*a.rbegin() << std::endl;

    a.push_back(3);

    std::cout << "List A after 1 push front - size: " << a.size() << " ptr: " << &*a.begin() << std::endl;
    std::cout << "List A after 1 push back - size: " << a.size() << " ptr: " << &*a.rbegin() << std::endl;

    a.push_front(0);

    std::cout << "List A after 1 push front - size: " << a.size() << " ptr: " << &*a.begin() << std::endl;
    std::cout << "List A after 1 push back - size: " << a.size() << " ptr: " << &*a.rbegin() << std::endl;

    a.erase(++a.begin());

    std::cout << "List A after 1 remove front - size: " << a.size() << " ptr: " << &*a.begin() << std::endl;
    std::cout << "List A after 1 remove back - size: " << a.size() << " ptr: " << &*a.rbegin() << std::endl;

    return 0;
}