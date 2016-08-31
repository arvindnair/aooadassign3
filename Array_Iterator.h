#ifndef _ARRAY_ITERATOR_H_
#define _ARRAY_ITERATOR_H_

#include <cstring>            // for size_t definition
#include <iostream>           // for printing I/O messages.
#include "Array.h"            // for Array definition.

/**
* @class Array_Iterator
*
* Basic implementation of Array Iterator.
*/
template <typename T>
class Array_Iterator
{
public:

	/// Default Constructor.
	Array_Iterator (void);

	/**
	* Initializing constructor
	*
	* @param[in]       a           The source array.
	*/
	Array_Iterator (Array<T> & a);

	/// Destructor.
	~Array_Iterator (void);

	/**
	* Checks if the iteration is complete for the given array. Returns true
	* if the iteration is complete else returns false if the iteration is 
	* not completed.
	*
	* 
	* @retval           true        The iteration is complete.
	* @retval           false       The iteration is not complete.
	*/
	bool is_done (void);

	/**
	* Increments the current by one to the next element in iteration.
	*
	*/
	void advance (void);

	/**
	* Returns the current element at the iteration.
	*
	* @return          Current element at iteration.
	*/
	T & operator * (void);

	/**
	* Returns the current element at the iteration.
	*
	* @return          Current element at iteration.
	*/
	T * operator -> (void);


private:

	/// Array for iteration.
	Array<T> & a_;

	/// Keep track of current element of the iteration.
	size_t curr_;
};

#include "Array_Iterator.inl"

#include "Array_Iterator.cpp"

#endif // !_ARRAY_ITERATOR_H_



