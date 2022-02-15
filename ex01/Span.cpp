#include "Span.hpp"

Span::Span(){
	this->_size = 0;
	this->_occupedSlots = 0;
}

Span::Span(Span const & src){
	*this = src;
}

Span::Span(unsigned int N){
	this->_size = N;
	this->_occupedSlots = 0;
}

Span::~Span(){
}

Span &	Span::operator=(Span const & src){
	this->_list.clear();
	std::copy(src._list.begin(), src._list.end(), this->_list.begin());
	this->_occupedSlots = src._occupedSlots;
	this->_size = src._size;
	return (*this);
}

void	Span::addNumber(int n){
	if (this->_occupedSlots < this->_size){
		this->_list.push_back(n);
		this->_occupedSlots++;
	}
	else
		throw std::exception();
}

long int	Span::shortestSpan(){
	if (this->_size <= 1 || this->_occupedSlots <= 1)
		throw std::exception();
	
	std::vector<int>	t(this->_list);
	std::sort(t.begin(), t.end());
	
	long int	tmp;
	long int	shortest = *(t.begin() + 1) - *(t.begin());
	for (std::vector<int>::iterator	it = t.begin(); it != t.end() - 1; ++it){
		tmp = *(it + 1) - *it;
		if (tmp < shortest)
			shortest = tmp;
	}
	return (shortest);
}

long int	Span::longestSpan(){
	if (this->_size <= 1 || this->_occupedSlots <= 1)
		throw std::exception();
	std::vector<int>::iterator min = std::min_element(this->_list.begin(), this->_list.end());
	std::vector<int>::iterator max = std::max_element(this->_list.begin(), this->_list.end());
	long int	ret = *max - *min;
	return(ret);
}

void	Span::addMoreNumbers(std::vector<int>::iterator begin,
	std::vector<int>::iterator end){
	if (this->_size == 0 || this->_occupedSlots == this->_size)
		throw std::exception();
	unsigned int	slot_left = this->_size - this->_occupedSlots;
	long int	d = std::distance(begin, end);
	if (d > slot_left)
		d = slot_left;
	for (std::vector<int>::iterator it = begin; it != begin + d; ++it)
		this->addNumber(*it);
}

std::vector<int>	Span::getList() const{
	return (this->_list);
}

std::ostream & operator<<(std::ostream &o, Span const &s){
	std::vector<int>::iterator b = s.getList().begin();
	std::vector<int>::iterator e = s.getList().end();
	for(std::vector<int>::iterator it = b; it != e; ++it){
		o << *it << " ";
	}
	o << std::endl;
	return (o);
}
