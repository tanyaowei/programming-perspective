#include <iostream>
#include <string>
#include <vector>

int main(int argc, char**argv)
{
    std::vector<std::string> input_list({"abc","cba"});
    std::string input("hello world");
    std::cout << "main()    : " <<input << std::endl;
    input_list.push_back(std::move(input));
    std::cout << "main()    : " <<input << std::endl;
    return 0;
}