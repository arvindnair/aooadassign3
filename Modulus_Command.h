//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _MODULUS_COMMAND_H_
#define _MODULUS_COMMAND_H_

#include <string>             // for printing std::string definition.
#include <iostream>           // for printing I/O messages.
#include <stdexcept>          // for throwing exceptions.
#include <cstring>            // for size_t definition.
#include <exception>          // for throwing run_time error and logic_error exceptions.
#include <cstdlib>            // for printing exception message.
#include "Expr_Command.h"     // for Expression Command.
#include "Binary_Command.h"   // for Binary Command.
#include "Stack.h"            // for stack definition.

/**
* @class Modulus_Command
*
* Implementation of Modulus_Command.
*/

class Modulus_Command : public Binary_Command
{
public:

	/// Default constructor.
	Modulus_Command (void);

	/// Destructor.
	~Modulus_Command (void);

	/**
	* Perform Modulus of the two numbers and returns the result.
	* 
	* @param[in]       n1                    Number 1 for Modulus.
	* @param[in]       n2                    Number 2 for Modulus.
	* @return          Result of Modulus.
	* @exception       std::logic_error      Modulus By Zero : Undefined.
	*/
	virtual int evaluate (int n1, int n2) const;

	/**
	* Checks and returns the token type string of the Modulus Command.
	*
	* @retval          "%"                     String of %
	*/
	virtual std::string binary_token_type (void) const;

	/**
	* Returns the stack precedence number of the % operator.
	*
	* @retval          1                       Stack precedence number of %
	*/
	virtual int binary_stack_precedence_number (void) const;

private:

};


#endif // !_MODULUS_COMMAND_H_
