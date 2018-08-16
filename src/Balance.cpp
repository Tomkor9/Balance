#include "../inc/Balance.hpp"

bool Balance::check(std::string input){

unsigned int normal_opened, square_opened, curved_opened;
unsigned int normal_cloased, square_cloased, curved_cloased; 

normal_opened = square_opened = curved_opened =
normal_cloased = square_cloased = curved_cloased = 0;

    for(size_t i = 0; i < input.size(); i++){
        switch(input.at(i)){
            case '{': curved_opened++; break; 
            case '}': curved_cloased++; break; 
            case '[': square_opened++; break; 
            case ']': square_cloased++; break; 
            case '(': normal_opened++; break; 
            case ')': normal_cloased++; break;
        }}


    if(( square_opened == square_cloased &&
         curved_opened == curved_cloased &&
         normal_opened == normal_cloased ))
          return true;
    return false;
}