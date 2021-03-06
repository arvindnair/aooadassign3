// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include <string>                        // for printing std::string definition.
#include <iostream>                      // for printing I/O messages.
#include <stdexcept>                     // for throwing exceptions.
#include <cstring>                       // for size_t definition.
#include <exception>                     // for throwing run_time error and logic_error exceptions.
#include <cstdlib>                       // for printing exception message.
#include "Expr_Command.h"                // for Expression Command.
#include "Left_Parenthesis_Command.h"    // for Left Parenthesis Command.
#include "Stack.h"                       // for stack definition.

//
// Left_Parenthesis_Command
//
Left_Parenthesis_Command::Left_Parenthesis_Command (void)
{}

//
// ~Left_Parenthesis_Command
//
Left_Parenthesis_Command::~Left_Parenthesis_Command (void)
{}

//
// execute
//
bool Left_Parenthesis_Command::execute (Stack <int> & s)
{
	// return true if successful.
	return true;
}

//
// token_type
//
std::string Left_Parenthesis_Command::token_type (void) const
{
	// return string of (
	return "(";
}

//
// stack_precedence_number
//
int Left_Parenthesis_Command::stack_precedence_number (void) const
{
	// return int value 3
	return 3;
}