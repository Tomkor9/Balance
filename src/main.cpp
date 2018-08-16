#include <iostream>
#include "../inc/Balance.hpp"

int main()
{
    Balance input;
    std::string balanced = "{{([})]}";
    std::string unbalanced = "{[()])}}";

    std::cout << input.check(unbalanced);
    std::cout << input.check(balanced);
    std::cin.get();
    return 0;
}
