//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _Expr_Evaluator_H_
#define _Expr_Evaluator_H_

#include <string>                           // for printing std::string definition.
#include <iostream>                         // for printing I/O messages.
#include <stdexcept>                        // for throwing exceptions.
#include <cstring>                          // for size_t definition.
#include <exception>                        // for throwing run_time error and logic_error exceptions.
#include <cstdlib>                          // for printing exception message.
#include <sstream>                          // for istringstream and stringstream definition.
#include "Array_Iterator.h"                 // for Array Iterator.
#include "Expr_Command_Factory.h"           // for Expression Command Factory.
#include "Expr_Command.h"                   // for Expression Command.
#include "Stack_Expr_Command_Factory.h"     // for Stack Expression Command Factory.
#include "Stack.h"                          // for Stack definition.
#include "Array.h"                          // for Array definition.
#include "Add_Command.h"                    // for Add Command.
#include "Divide_Command.h"                 // for Divide Command.
#include "Multiply_Command.h"               // for Multiply Command.
#include "Subtract_Command.h"               // for Subtract Command.
#include "Modulus_Command.h"                // for Modulus Command.
#include "Binary_Command.h"                 // for Binary Command.

/**
* @class Expr_Evaluator 
*
* Implementation of Infix to Postfix evaluation and result of Postfix.
*/
class Expr_Evaluator
{
public:

	/// Default constructor.
	Expr_Evaluator (void);

	/// Destructor.
	~Expr_Evaluator (void);

	/**
	* Converts the given infix expression to postfix format. It takes infix string and
	* a postfix array of commands and using the factory creates objects of
	* various command requests and converts into a postfix array of commands, storing
	* it in postfix. If expression is not valid then std::runtime_error is thrown.
	* 
	* @param[in]       infix                 Infix string.
	* @param[in]       factory               Expression Command Factory.
	* @param[in]       postfix               Array of Commands.
	* @retval          true                  Operation Succeded.
	* @exception       std::runtime_error    Invalid Expression.
	*/
	bool infix_to_postfix (const std::string & infix, Expr_Command_Factory & factory, Array <Expr_Command *> & postfix);

	/**
	* Evaluates the expresion in postfix format by iterating over the contents of 
	* the postfix array of commands and executing them. The result is stored in result 
	* after the iteration and popping the stack.If expression is not valid then 
	* std::runtime_error is thrown.
	* 
	* @param[in]       postfix               Array of Commands.
	* @param[in]       result                Result of the Expression.
	* @param[in]       count_del             Counts number of deletes.
	* @retval          true                  Operation Succeeded.
	* @retval          false                 Operation Failed.
	* @exception       std::runtime_error    Invalid Expression.
	*/
	bool evaluate_postfix (Array_Iterator<Expr_Command*> & iter, int & result);

private:
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/// DEFINE ANY HELPER METHODS HERE

	/**
	* Checks if the token is a token is an operator and returns true if it is an
	* operator and returns false if it is not an operator.
	* 
	* @param[in]       token                 Particular token to be checked.
	* @retval          true                  Token is an operator.
	* @retval          false                 Token is not an operator.
	*/
	bool is_operator (const std::string & token) const;

	/**
	* Checks if the token is a token is an number and returns true if it is an
	* number and returns false if it is not an number.If expression is not valid then 
	* std::runtime_error is thrown.
	* 
	* @param[in]       token                 Particular token to be checked.
	* @param[in]       count                 Counts the number of commands in postfix array.
	* @param[in]       token_previous        The previous token.
	* @param[in]       value                 The integer value of the number.
	* @retval          true                  Passed token is a number.
	* @retval          false                 Passed token is not a number.
	* @exception       std::runtime_error    Invalid Expression.
	*/
	bool is_number (const std::string & token, size_t & count, std::string & token_previous, int & value) const;

	/**
	* Checks if the token is a token is an expression and returns true if it is an
	* expression and returns false if it is not an expression.If expression is not 
	* valid then std::runtime_error is thrown.
	* 
	* @param[in]       infix                 Infix expression to be checked.
	* @retval          true                  Passed string is an expression.
	* @retval          false                 Passed string is not an expression.
	* @exception       std::runtime_error    Invalid Expression.
	*/
	bool is_expression (const std::string & infix) const;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////
};

#include "Expr_Evaluator.inl"

#endif // !_Expr_Evaluator_H_
