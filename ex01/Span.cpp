#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : _max(0)
{
	return ;
}

Span::Span( unsigned int N) : _max(N)
{
	return ;
}

Span::Span( const Span & src )
{
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{
		this->_max = rhs._max;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void				Span::addNumber(int nb)
{
	if (this->vec.size() >= this->_max)
		throw "Maximum size reach";
	this->vec.push_back(nb);
}

void			addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	(void)start; (void)end;
}


unsigned int		Span::shortestSpan()
{
	if (this->vec.size() == 0 || this->vec.size() == 1)
		throw "Can't process shortestSpan()";

	int					shortest;
	int					tmp;
	std::vector<int>	cpy(this->vec.begin(), this->vec.end());
	std::vector<int>::iterator	it = cpy.begin();	

	std::sort(cpy.begin(), cpy.end());
	shortest = std::max(*it, *(it + 1)) - std::min(*it, *(it + 1));
	it++;
	while(it < cpy.end())
	{
		tmp = std::max(*it, *(it + 1)) - std::min(*it, *(it + 1));
		if (tmp < shortest)
			shortest = tmp;
		++it;
	}
	return shortest;
}

unsigned int		Span::longestSpan()
{
	if (this->vec.size() == 0 || this->vec.size() == 1)
		throw "Can't process longestSpan()";

	return (*std::max_element(this->vec.begin(), this->vec.end()) -
			*std::min_element(this->vec.begin(), this->vec.end()));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */