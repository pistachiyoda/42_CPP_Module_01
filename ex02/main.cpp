#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "~ The memory address of the string variable. ~" << std::endl;
    std::cout << &str << std::endl;
    std::cout << "~ The memory address held by stringPTR. ~" << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << "~ The memory address held by stringREF ~" << std::endl;
    std::cout << &stringREF << std::endl;
    std::cout << std::endl;

    std::cout << "~ The value of the string variable. ~" << std::endl;
    std::cout << str << std::endl;
    std::cout << "~ The value pointed to by stringPTR. ~" << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << "~ The value pointed to by stringREF. ~" << std::endl;
    std::cout << stringREF << std::endl;
}
