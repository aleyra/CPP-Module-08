#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>
# include <ostream>

class Span{
public:
	Span();
	Span(Span const &src);
	Span(unsigned int N);
	virtual ~Span();

	Span &	operator=(Span const & src);

	void		addNumber(int n);
	long int 	shortestSpan();
	long int	longestSpan();
	void		addMoreNumbers(std::vector<int>::iterator begin,
		std::vector<int>::iterator end);
	const std::vector<int>&	getList() const;

protected:

private:
	std::vector<int>	_list;
	unsigned int		_size;
	unsigned int		_occupedSlots;
};

std::ostream &	operator<<(std::ostream & o, Span const &s);

#endif
