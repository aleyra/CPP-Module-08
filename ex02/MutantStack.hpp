#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>

template <typename T>
class MutantStack:public std::stack<T>{
public:
	MutantStack();
	MutantStack(MutantStack<T> const &src);
	virtual ~MutantStack();

	MutantStack<T> &	operator=(MutantStack<T> const &src);

	typedef MutantStack<T>::iterator iterator;//?
	iterator	begin();//?
	iterator	end();//?
	iterator	operator++();//?
	iterator	operator++(int );//?
	iterator	operator--();//?
	iterator	operator--(int );//?
	T			operator*();//?

protected:

private:
};

#endif