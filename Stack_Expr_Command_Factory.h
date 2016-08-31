//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _STACK_EXPR_COMMAND_FACTORY_H_
#define _STACK_EXPR_COMMAND_FACTORY_H_

#include <string>                    // for printing std::string definition.
#include <iostream>                  // for printing I/O messages.
#include <stdexcept>                 // for throwing exceptions.
#include <cstring>                   // for size_t definition.
#include <exception>                 // for throwing run_time error and logic_error exceptions.
#include <cstdlib>                   // for printing exception message.
#include "Expr_Command_Factory.h"    // for Expression Command Factory.

/**
* @class Stack_Expr_Command_Factory
*
* Implementation of Stack_Expr_Command_Factory.
*/

class Stack_Expr_Command_Factory : public Expr_Command_Factory
{
public:

	/// Default constructor.
	Stack_Expr_Command_Factory(void);

	/// Destructor.
	virtual ~Stack_Expr_Command_Factory (void);

	/**
	* Creates and returns a new Number Command object.  
	*
	* @return         New Number Command object.
	*/
	virtual Num_Command *  create_num_command (int num);

	/**
	* Creates and returns a new Addition Command object.  
	*
	* @return         New Addition Command object.
	*/
	virtual Add_Command * create_add_command (void);

	/**
	* Creates and returns a new Subtract Command object.  
	*
	* @return         New Subtraction Command object.
	*/
	virtual Subtract_Command * create_subtract_command (void);

	/**
	* Creates and returns a new Multiply Command object.  
	*
	* @return         New Multiply Command object.
	*/
	virtual Multiply_Command * create_multiply_command (void);

	/**
	* Creates and returns a new Divide Command object.  
	*
	* @return         New Divide Command object.
	*/
	virtual Divide_Command * create_divide_command (void);

	/**
	* Creates and returns a new Modulus Command object.  
	*
	* @return         New Modulus Command object.
	*/
	virtual Modulus_Command * create_modulus_command (void);

	/**
	* Creates and returns a new Left Parenthesis Command object.  
	* 
	* @return         New Left Parenthesis Command object.
	*/
	virtual Left_Parenthesis_Command * create_left_parenthesis_command (void);

	/**
	* Creates and returns a new Right Parenthesis Command object.  
	* 
	* @return         New Right Parenthesis Command object.
	*/
	virtual Right_Parenthesis_Command * create_right_parenthesis_command (void);

private:

};


#endif // !_STACK_EXPR_COMMAND_FACTORY_H_
