#include "easyfind.hpp"

int	main(){
	{
		std::cout << "with an array\n";
		std::array<int,5> myarray = { 2, 16, 77, 34, 50 };
		
		try{
			std::array<int, 5>::iterator	a = easyfind(myarray, 16);
			std::cout << *a << std::endl;
		}
		catch(std::exception &e){
			std::cout << "not found\n";
		}

		try{
			std::array<int, 5>::iterator	a = easyfind(myarray, 3);
			std::cout << *a << std::endl;
		}
		catch(std::exception &e){
			std::cout << "not found\n";
		}
	}

	{
		std::cout << "with a vector\n";
		std::vector<int> myvector;
		for (int i=1; i<=5; i++) myvector.push_back(i);
		try {
			std::vector<int>::iterator	a = easyfind(myvector, 3);
			std::cout << *a << std::endl;
			
		}
		catch(std::exception &e){
			std::cout << "not found\n";
		}
		try {
			std::vector<int>::iterator	a = easyfind(myvector, 13);
			std::cout << *a << std::endl;
			
		}
		catch(std::exception &e){
			std::cout << "not found\n";
		}
	}

	{
		std::cout << "with a deque\n";
		std::deque<int> mydeque;
		for (int i=1; i<=5; i++) mydeque.push_back(i);
		try {
			std::deque<int>::iterator	a = easyfind(mydeque, 3);
			std::cout << *a << std::endl;
			
		}
		catch(std::exception &e){
			std::cout << "not found\n";
		}
		try {
			std::deque<int>::iterator	a = easyfind(mydeque, 13);
			std::cout << *a << std::endl;
			
		}
		catch(std::exception &e){
			std::cout << "not found\n";
		}
	}

	{
		std::cout << "with a forward list\n";
		int myints[] = {75,23,16,42,13};
		std::forward_list<int> mylist (myints, myints + 5);
		try{
			std::forward_list<int>::iterator	a = easyfind(mylist, 16);
			std::cout << *a << std::endl;
		}
		catch(std::exception &e){
			std::cout << "not found\n";
		}

		try{
			std::forward_list<int>::iterator	a = easyfind(mylist, 3);
			std::cout << *a << std::endl;
		}
		catch(std::exception &e){
			std::cout << "not found\n";
		}
	}

	{
		std::cout << "with a list\n";
		int myints[] = {75,23,65,42,13};
		std::list<int> mylist (myints, myints + 5);
		try{
			std::list<int>::iterator	a = easyfind(mylist, 13);
			std::cout << *a << std::endl;
		}
		catch(std::exception &e){
			std::cout << "not found\n";
		}

		try{
			std::list<int>::iterator	a = easyfind(mylist, 3);
			std::cout << *a << std::endl;
		}
		catch(std::exception &e){
			std::cout << "not found\n";
		}
	}

	return (0);
}
