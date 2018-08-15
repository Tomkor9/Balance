#include "../inc/Balance.hpp"

bool Balance::check(std::string input){
int opened = 0;
int cloased = 0;

    for(size_t i = 0; i < input.size(); i++){
        if(input.at(i) == '{')
            opened++;
        else if(input.at(i) == '}')
            cloased++;
    }
    if(( opened == cloased ))
          return true;
    return false;
}