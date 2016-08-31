#include <string>                           // for printing std::string definition.
#include <iostream>                         // for printing I/O messages.
#include <stdexcept>                        // for throwing exceptions.
#include <cstring>                          // for size_t definition.
#include <exception>                        // for throwing run_time error and logic_error exceptions.
#include <cstdlib>                          // for printing exception message.
#include "Expr_Evaluator.h"                 // for Expression Evaluator.
#include "Expr_Command_Factory.h"           // for Expression Command Factory.
#include "Expr_Command.h"                   // for Expression Command.
#include "Stack_Expr_Command_Factory.h"     // for Stack Expression Command Factory.
#include "Stack.h"                          // for Stack definition.
#include "Array.h"                          // for Array definition.
#include "Array_Iterator.h"                 // for Array Iterator.

int main (int argc, char* argv [])
{
	// create string containing "QUIT".
	std::string quit_msg="QUIT";
	// using a variable to count from the index to delete in catch.
	size_t count_del=0;
	while (true)
	{
		//taking the expression as input.
		std::cout<<"Enter expression: "<<std::endl;
		std::string exp;
		std::getline(std::cin,exp);
		// if expression entered is QUIT then exit the program.
		if (exp==quit_msg)
		{
			break;
		}
		// creating an object of Infix_to_Postfix class.
		Expr_Evaluator a;
		// creating a stack command factory object.
		Stack_Expr_Command_Factory factory;
		// creating an array of commands.
		Array<Expr_Command* > postfix;
		Array_Iterator<Expr_Command* > iter(postfix);
		// using try catch
		try
		{
			// first convert the expression from infix to postfix.
			a.infix_to_postfix(exp,factory,postfix);
			// setting the result to zero.
			int result=0;
			// now evaluate the expression.
			a.evaluate_postfix(iter,result);
			// Print to STDOUT the result.
			std::cout<<result<<std::endl;
		}
		// in catch block do delete command objects to avoid memory leaks
		catch(std::exception& e)
		{
			// iterate over the postfix array and execute each command.
			for (; !iter.is_done() ; iter.advance())
			{	
				// delete the command object after execution.
				delete *iter;
			}
			// print the exception message.
			std::cout<<e.what()<<std::endl;
		}
	}
	return 0;
}
