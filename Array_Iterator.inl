// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// is_done
//
// checks if current is greater than or equal to the size of array passed
// for iteration.
template <typename T>
inline
	bool Array_Iterator<T>::is_done (void)
{
	return this->curr_>=this->a_.size(); 
}

//
// advance
//
// increments the current by one to go to the next element in the iteration
// of the passed array.
template <typename T>
inline
	void Array_Iterator<T>::advance (void)
{
	++ this->curr_;
}

//
// operator *
//
// returns the current element at the iteration.
template <typename T>
inline
	T & Array_Iterator<T>::operator * (void)
{
	return this->a_[curr_];
}

//
// operator ->
//
// returns the current element at the iteration.
template <typename T>
inline 
	T * Array_Iterator<T>::operator -> (void)
{
	return &this->a_[curr_];
}