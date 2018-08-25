#include <iostream>
#include "../inc/Balance.hpp"

int main()
{
    Balance input;
    std::cout << input.check("{}{}") << ": {}{} should be 1\n";
	std::cout << input.check("{()}") << ": {()} should be 1\n";
	std::cout << input.check("{(})") << ": {(}) should be 0\n";
	std::cout << input.check("{)(}") << ": {)(} should be 0\n";
	std::cout << input.check("{})") << ": {}) should be 0\n";

    std::cin.get();
    return 0;
}
