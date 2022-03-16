#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int			_max;
		std::vector<int>		vec;

	public:

		Span();
		Span( unsigned int N );
		Span( Span const & src );
		~Span();

		Span &			operator=( Span const & rhs );

		void			addNumber(int nb);
		void			addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};

#endif /* ************************************************************ SPAN_H */