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
#include "Num_Command.h"      // for Number Command.
#include "Stack.h"            // for stack definition.


//
// Num_Command
//
Num_Command::Num_Command()
{}

//
// Num_Command (int)
//
// store the number passed into n_ variable using base member initialization.
Num_Command::Num_Command (int n)
	:n_ (n)
{}

//
// ~Num_Command
//
Num_Command::~Num_Command (void)
{}

//
// execute
//
bool Num_Command::execute (Stack <int> & s)
{
	// push the number n_ onto the stack.
	s.push(this->n_);
	// return true if successful.
	return true;
}

//
// token_type
//
std::string Num_Command::token_type (void) const
{
	// return the string of the particular number.
	return "n_";
}

//
// stack_precedence_number
//
int Num_Command::stack_precedence_number (void) const
{
	// return int value 0
	return 0;
}