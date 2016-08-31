// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include <string>             // for printing std::string definition.
#include <iostream>           // for printing I/O messages.
#include <stdexcept>          // for throwing exceptions.
#include <cstring>            // for size_t definition.
#include <exception>          // for throwing run_time error and logic_error exceptions.
#include <cstdlib>            // for printing exception message.
#include "Expr_Command.h"     // for Expression Command.
#include "Binary_Command.h"   // for Binary Command.
#include "Stack.h"            // for stack definition.

//
// Binary_Command
//
Binary_Command::Binary_Command (void)
{}

//
// ~Binary_Command
//
Binary_Command::~Binary_Command (void)
{}

//
// execute
//
bool Binary_Command::execute (Stack <int> & s)
{
	// if the stack is empty then the expression is invalid.
	if(s.is_empty())
	{
		throw std::runtime_error("Invalid Expression");
	}
	// after check store stack top in n2
	int n2 = s.top();
	// pop the stack
	s.pop();
	// if the stack is empty then the expression is invalid.
	if(s.is_empty())
	{
		throw std::runtime_error("Invalid Expression");
	}
	// after check store stack top in n1.
	int n1 = s.top();
	// pop the stack.
	s.pop();
	// evaluate as per the particular command and store in result.
	int result = this->evaluate(n1,n2);
	// push the result in stack.
	s.push(result);
	// operation is successful.
	return true;
}

//
// token_type
//
std::string Binary_Command::token_type (void) const
{
	// call the particular command for that string.
	std::string s = this->binary_token_type();
	// return the string.
	return s;
}

//
// stack_precedence_number
//
int Binary_Command::stack_precedence_number (void) const
{
	// call the particular command for the precedence number.
	int i = this->binary_stack_precedence_number();
	// return the number.
	return i;
}