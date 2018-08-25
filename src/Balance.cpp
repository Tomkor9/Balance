#include "../inc/Balance.hpp"
#include <stack>
#include <string>

bool Balance::check(std::string input){

	if (!input.empty() && !(input.size() % 2))
	{
		std::stack<char> stack;
		stack.push(input.at(0));

		for (size_t i = 1; i < input.size(); i++){
			if (input.at(i) == '}' && stack.top() == '{')
				stack.pop();
			else if (input.at(i) == ')' && stack.top() == '(')
				stack.pop();
			else if (input.at(i) == ']' && stack.top() == '[')
				stack.pop();
            else
			stack.push(input.at(i));
		}
		if (stack.empty())
			return true;
	}
	return false;
}