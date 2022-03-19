#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>
#include <deque>
#include <algorithm>

template< typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){};
        MutantStack(MutantStack<T> const & src) {
            *this = src;
        }
        ~MutantStack(){};
        
	MutantStack<T> & operator=(MutantStack<T> const & rhs) {
            if (this != &rhs)
                this->c = rhs.c;
            return *this;
        }

        typedef typename std::deque<T>::iterator iterator;

        iterator    begin() { return this->c.begin();}
        iterator    end() { return this->c.end();}
};

#endif
