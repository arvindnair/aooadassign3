// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include <string>                          // for printing std::string definition.
#include <iostream>                        // for printing I/O messages.
#include <stdexcept>                       // for throwing exceptions.
#include <cstring>                         // for size_t definition.
#include <exception>                       // for throwing run_time error and logic_error exceptions.
#include <cstdlib>                         // for printing exception message.
#include "Expr_Command_Factory.h"          // for Expression Command Factory.
#include "Stack_Expr_Command_Factory.h"    // for Stack Expression Command Factory.

//
// Stack_Expr_Command_Factory
//
Stack_Expr_Command_Factory::Stack_Expr_Command_Factory (void)
{}

//
// ~Stack_Expr_Command_Factory
//
Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory (void)
{}

//
// create num command
//
Num_Command *  Stack_Expr_Command_Factory::create_num_command (int num)
{
	// returns a Num Command object
	return new Num_Command(num);
}

//
// create add command
//
Add_Command * Stack_Expr_Command_Factory::create_add_command (void)
{
	// returns a Add Command object
	return new Add_Command();
}

//
// create subtract command
//
Subtract_Command * Stack_Expr_Command_Factory::create_subtract_command (void)
{
	// returns a Subtract Command object
	return new Subtract_Command();
}

//
// create multiply command
//
Multiply_Command * Stack_Expr_Command_Factory::create_multiply_command (void)
{
	// returns a Multiply Command object
	return new Multiply_Command();
}

//
// create divide command
//
Divide_Command * Stack_Expr_Command_Factory::create_divide_command (void)
{
	// returns a Divide Command object
	return new Divide_Command();
}

//
// create modulus command
//
Modulus_Command * Stack_Expr_Command_Factory::create_modulus_command (void)
{
	// returns a Modulus Command object
	return new Modulus_Command();
}

//
// create left parenthesis command
//
Left_Parenthesis_Command * Stack_Expr_Command_Factory::create_left_parenthesis_command (void)
{
	// returns a Left Parenthesis Command object
	return new Left_Parenthesis_Command();
}

//
// create right parenthesis command
//
Right_Parenthesis_Command * Stack_Expr_Command_Factory::create_right_parenthesis_command (void)
{
	// returns a Right Parenthesis Command object
	return new Right_Parenthesis_Command();
}

