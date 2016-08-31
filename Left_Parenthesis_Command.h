//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _LEFT_PARENTHESIS_COMMAND_H_
#define _LEFT_PARENTHESIS_COMMAND_H_

#include <string>             // for printing std::string definition.
#include <iostream>           // for printing I/O messages.
#include <stdexcept>          // for throwing exceptions.
#include <cstring>            // for size_t definition.
#include <exception>          // for throwing run_time error and logic_error exceptions.
#include <cstdlib>            // for printing exception message.
#include "Expr_Command.h"     // for Expression Command.
#include "Stack.h"            // for stack definition.

/**
* @class Left_Parenthesis_Command
*
* Implementation of Left_Parenthesis_Command.
*/

class Left_Parenthesis_Command:public Expr_Command
{
public:

	/// Default constructor.
	Left_Parenthesis_Command (void);

	/// Destructor.
	~Left_Parenthesis_Command (void);

	/**
	* Just returns operation status and does no operation on the stack.
	* 
	* @param[in]       s                     Stack to be used for evaluation.
	* @retval          true                  Operation Succeeded.
	*/
	virtual bool execute (Stack <int> & s);

	/**
	* Checks and returns the token type string of the Addition Command.
	*
	* @retval          "("                     String of (
	*/
	virtual std::string token_type (void) const;

	/**
	* Returns the stack precedence number of ( 
	*
	* @retval          3                       Stack precedence number of (
	*/
	virtual int stack_precedence_number (void) const;

private:

};


#endif // !_LEFT_PARENTHESIS_COMMAND_H_
