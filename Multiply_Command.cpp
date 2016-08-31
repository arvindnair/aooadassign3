// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

#include <string>                // for printing std::string definition.
#include <iostream>              // for printing I/O messages.
#include <stdexcept>             // for throwing exceptions.
#include <cstring>               // for size_t definition.
#include <exception>             // for throwing run_time error and logic_error exceptions.
#include <cstdlib>               // for printing exception message.
#include "Expr_Command.h"        // for Expression Command.
#include "Binary_Command.h"      // for Binary Command.
#include "Multiply_Command.h"    // for Multiply Command.
#include "Stack.h"               // for stack definition.

//
// Multiply_Command
//
Multiply_Command::Multiply_Command (void)
{}

//
// ~Multiply_Command
//
Multiply_Command::~Multiply_Command (void)
{}

//
// evaluate
//
int Multiply_Command::evaluate (int n1, int n2) const
{
	// Arvind, please use the template method pattern here to reduce duplicate
	// code across each of the binary commands.

	// Dr.Hill, I have used the template method pattern by using a class Binary
	// Command which has reduced the duplicate code across each of the Binary
	// Commands (Addition, Subtraction, Multiplication, Division and Modulus).

	// return the multiplication of n1 and n2.
	return n1*n2;
}

//
// binary_token_type
//
std::string Multiply_Command::binary_token_type (void) const
{
	// return the string of *
	return "*";
}

//
// binary_stack_precedence_number
//
int Multiply_Command::binary_stack_precedence_number (void) const
{
	// return int value 1
	return 1;
}