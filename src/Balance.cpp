#include "../inc/Balance.hpp"

bool Balance::check(std::string input){
    if(input == "{" || input == "}")
        return false;
    if(input == "{}")
        return true;
}