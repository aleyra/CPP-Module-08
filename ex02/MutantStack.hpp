#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>
# include <iterator>
# include <deque>

template <typename T, typename C = std::deque<T> >
class MutantStack:public std::stack<T, C>{
public:
	MutantStack(){}
	MutantStack(MutantStack const &src){
		*this = src;
	}
	virtual ~MutantStack(){}

	MutantStack &	operator=(MutantStack const &src){
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