#include <iostream>
#include <cctype>
#include <string>
#include "person.h"

Person::Person()
{
    collectInfo();
}

void Person::collectInfo()
{
    std::string may_continue;

    std::cout << "Hello there. We need facts about yourself before you can continue. \n";
    std::cout << "Continue? ( Yes, No ): ";
    std::getline(std::cin, may_continue);

    for (char &c : may_continue)
    {
        c = std::toupper(c);
    }

    if (may_continue == "YES")
    {
        std::cout << "valid";
    }
    else if (may_continue == "NO")
    {
        std::cout << "Quit successful.....";
    }
    else
    {
        std::cout << "Sorry! You entered an invalid input. \n \n";
        collectInfo();
    }
}
