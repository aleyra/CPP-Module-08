#include "Span.hpp"
#include <cstdlib>

int main(){
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp.longestSpan() << std::endl;
	}
	
	{
		std::cout << "my tests\n";
		Span s(10000);

		for (int i = 0; i < 10000; i++){
			s.addNumber(rand());
		}

		std::cout << "shortest span = " << s.shortestSpan() << std::endl;
		std::cout << "longest span = " << s.longestSpan() << std::endl;
	}
	{
		std::cout << "next tests\n";
		Span s(10);

		std::vector<int> v = {1, 2, 3, 4, 5, 6};
		s.addMoreNumbers(v.begin(), v.end());
		std::cout << s;
		s.addMoreNumbers(v.begin(), v.end());
		std::cout << s;
	}

	return (0);
}