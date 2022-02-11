#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <array>
# include <vector>
# include <deque>
# include <forward_list>
# include <list>
# include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &c, int i){
	typename T::iterator ret = std::find(c.begin(), c.end(), i);
	if (ret == c.end())
		throw std::exception();
	return (ret);
}

#endif