#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <algorithm>

template< typename T>
class MutantStack : public std::stack<T>
{
    private:
        /* data */
    public:
        MutantStack(){};
        MutantStack(MutantStack<T> const & src) {
            *this = src;
        }
        MutantStack & operator=(MutantStack<T> const & rhs) {
            if (this != &rhs)
                this->c = rhs.c;
            return *this;
        }
        ~MutantStack(){};

        typedef typename std::deque<T>::iterator iterator;

        iterator    begin() { return this->c.begin();}
        iterator    end() { return this->c.end();}
};

#endif
