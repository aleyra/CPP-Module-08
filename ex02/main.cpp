#include "MutantStack.hpp"

int	main(){
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "top = " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size = " << mstack.size() << std::endl << "pop\n";
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite){
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\nMy tests\n";

	MutantStack<std::string>	ms;

	ms.push("Pierre");
	ms.push("Manon");
	std::cout << "top = " << ms.top() << std::endl;
	std::cout << "size = " << ms.size() << std::endl << "pop\n";
	ms.pop();
	std::cout << "size = " << ms.size() << std::endl;
	ms.push("Seoyoung");
	ms.push("Lars");
	ms.push("Lucille");
	ms.push("Benjamin");
	std::cout << "ms[2] = " << ms[2] << std::endl;
	MutantStack<std::string>::iterator it2 = ms.begin();
	MutantStack<std::string>::iterator ite2 = ms.end();
	++it2;
	--it2;
	int i = 0;
	while (it2 != ite2){
		std::cout << "ms["<< i <<"] = " << *it2 << std::endl;
		++it2;
		i++;
	}
	std::stack<std::string> s2(ms);

	std::cout << "\nMy tests\n";

	return (0);
}