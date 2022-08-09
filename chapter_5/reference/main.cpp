#include <iostream>
#include <string>

void func(std::string& input)
{
    std::cout << "func()    : " << input << std::endl;
    input.push_back('!');
    std::cout << "func()    : " << input << std::endl;
}

int main(int argc, char**argv)
{
    std::string input("hello world");
    std::cout << "main()    : " <<input << std::endl;
    func(input);
    std::cout << "main()    : " <<input << std::endl;
    return 0;
}