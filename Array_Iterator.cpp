// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Array_Iterator
//
// setting current and a_ to zero using base member initialization.
template <typename T>
Array_Iterator<T>::Array_Iterator (void)
	:a_(0),
	curr_(0)
{}

//
// Array_Iterator (Array<T> &)
//
// setting current to zero and copying contents into a_.
template <typename T>
Array_Iterator<T>::Array_Iterator (Array<T> & a)
	:a_(a), 
	curr_(0)
{}


//
// ~Array_Iterator
//
// Destructor is empty as array takes care of destruction.
template <typename T>
Array_Iterator<T>::~Array_Iterator (void)
{}

