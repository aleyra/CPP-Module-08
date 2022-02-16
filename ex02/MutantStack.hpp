#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>
# include <iterator>

template <typename T>
class MutantStack:public std::stack<T>{
public:
	MutantStack(){}
	MutantStack(MutantStack<T> const &src){
		*this = src;
	}
	virtual ~MutantStack(){}

	MutantStack<T> &	operator=(MutantStack<T> const &src){
		(void)src;
		return (*this);
	}

	typedef typename MutantStack::container_type::iterator iterator;
	iterator	begin(){
		return (this->c.begin());
	}
	iterator	end(){
		return(this->c.end());
	}
	T &			operator[](unsigned int const & i){
		return (this->c[i]);
	}

protected:

private:
};

#endif