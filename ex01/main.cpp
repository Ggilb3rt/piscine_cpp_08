#include <iostream>
#include "Span.hpp"
#include <map>
#include <vector>
#include <list>

void	subject_tests()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try
	{
		sp.addNumber(3);
	}
	catch(const char* e)
	{
		std::cerr << e << '\n';
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main() {
	subject_tests();

	return 0;
}