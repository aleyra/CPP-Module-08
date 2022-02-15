#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(){
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src){
	*this = src;
}

template <typename T>
MutantStack<T>::~MutantStack(){
}

template <typename T>
MutantStack<T> &	MutantStack<T>::operator=(MutantStack<T> const &src){
	(void)src;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(){
	return(this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(){
	return(this->c.end());
}

// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::operator++(){

// }

// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::operator++(int ){

// }

// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::operator--(){

// }

// template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::operator--(int ){

// }

// template <typename T>
// T			MutantStack<T>::operator*(){

// }
