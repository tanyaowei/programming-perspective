#include <iostream>
#include <string>
#include "../../dependencies/include/local/lib.h"

void func(std::string input)
{
    std::cout << "func()    : " << input << std::endl;
    input.push_back('!');
    std::cout << "func()    : " << input << std::endl;
}

int main(int argc, char**argv)
{
    CopyObj cpyobj(5);
    std::cout << cpyobj.m_arr << " : " << cpyobj.m_count << std::endl;
    CopyObj cpyobj2(cpyobj);
    std::cout << cpyobj2.m_arr << " : " << cpyobj2.m_count << std::endl;
    std::cout << std::endl;
    CloneObj clnobj(5);
    std::cout << clnobj.m_arr << " : " << clnobj.m_count << std::endl;
    CloneObj clnobj2(clnobj);
    std::cout << clnobj2.m_arr << " : " << clnobj2.m_count << std::endl;
    std::cout << std::endl;
    std::string input("hello world");
    std::cout << "main()    : " <<input << std::endl;
    func(input);
    std::cout << "main()    : " <<input << std::endl;
    return 0;
}