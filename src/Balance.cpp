#include "../inc/Balance.hpp"
#include <stack>

bool Balance::check(std::string input){
if (!input.empty())
    {
        std::stack<char> stack;
        for (size_t i = 0; i < input.size(); i++)
        {           
            if (input.at(i) == '{' ||
                input.at(i) == '(' ||
                input.at(i) == '[')
                stack.push(input.at(i));
            else {
                if (input.at(i) == '}' && stack.top() == '{')
                    stack.pop();
                else if (input.at(i) == ')' && stack.top() == '(')
                    stack.pop();
                else if (input.at(i) == ']' && stack.top() == '[')
                    stack.pop();
            }}
        if (stack.empty())
            return true;
    }
    return false;
}