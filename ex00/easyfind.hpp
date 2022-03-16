#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template< typename T>
typename T::const_iterator	easyfind(T const & container, int const & toFind)
{
	typename T::const_iterator	it = std::find(container.begin(), container.end(), toFind);

	if (it == container.end())
		throw "Nothing";
	return (it);
}

#endif