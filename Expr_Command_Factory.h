//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================

#ifndef _EXPR_COMMAND_FACTORY_H_
#define _EXPR_COMMAND_FACTORY_H_

#include <string>                         // for printing std::string definition.
#include <iostream>                       // for printing I/O messages.
#include <stdexcept>                      // for throwing exceptions.
#include <cstring>                        // for size_t definition.
#include <exception>                      // for throwing run_time error and logic_error exceptions.
#include <cstdlib>                        // for printing exception message.
#include "Expr_Command.h"                 // for Expression Command.
#include "Num_Command.h"                  // for Number Command.
#include "Add_Command.h"                  // for Add Command.
#include "Subtract_Command.h"             // for Subtract Command.
#include "Multiply_Command.h"             // for Multiply Command.
#include "Divide_Command.h"               // for Divide Command.
#include "Modulus_Command.h"              // for Modulus Command.
#include "Left_Parenthesis_Command.h"     // for Left Parenthesis Command.
#include "Right_Parenthesis_Command.h"    // for Right Parenthesis Command.
#include "Binary_Command.h"               // for Binary Command.

/**
* @class Expr_Command_Factory
*
* Implementation of Expression Factory Command.
*/

class Expr_Command_Factory
{
public:
	
	/// Default constructor.
	Expr_Command_Factory (void);

	/// Destructor.
	virtual ~Expr_Command_Factory (void) = 0;

	/**
	* Creates and returns a new Number Command object.  
	*
	* @return         New Number Command object.
	*/
	virtual Num_Command * create_num_command (int num) = 0;

	/**
	* Creates and returns a new Addition Command object.  
	*
	* @return         New Addition Command object.
	*/
	virtual Add_Command * create_add_command (void) = 0;

	/**
	* Creates and returns a new Subtract Command object.  
	*
	* @return         New Subtraction Command object.
	*/
	virtual Subtract_Command * create_subtract_command (void) = 0;

	/**
	* Creates and returns a new Multiply Command object.  
	*
	* @return         New Multiply Command object.
	*/
	virtual Multiply_Command * create_multiply_command (void) = 0;

	/**
	* Creates and returns a new Divide Command object.  
	*
	* @return         New Divide Command object.
	*/
	virtual Divide_Command * create_divide_command (void) = 0;

	/**
	* Creates and returns a new Modulus Command object.  
	* 
	* @return         New Modulus Command object.
	*/
	virtual Modulus_Command * create_modulus_command (void) = 0;

	/**
	* Creates and returns a new Left Parenthesis Command object.  
	*
	* @return         New Left Parenthesis Command object.
	*/
	virtual Left_Parenthesis_Command * create_left_parenthesis_command (void) = 0;

	/**
	* Creates and returns a new Right Parenthesis Command object.  
	*
	* @return         New Right Parenthesis Command object.
	*/
	virtual Right_Parenthesis_Command * create_right_parenthesis_command (void) = 0;


private:

	/// Copy Constructor.
	Expr_Command_Factory (const Expr_Command_Factory &);

	/// Assignment Operator.
	const Expr_Command_Factory & operator = (const Expr_Command_Factory &);
};

#endif // !_EXPR_COMMAND_FACTORY_H_
