#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

#include <iostream>
#include <stack>
#include <deque>

template <typename A, class Container = std::deque<A> >
class MutantStack: public std::stack<A>
{
    public:
        typedef typename Container::iterator iterator;
        MutantStack();
        MutantStack(const MutantStack &c);
        MutantStack &operator=(const MutantStack &c);
        ~MutantStack();

        iterator begin();
        iterator end();
};

template <typename A, typename B>
MutantStack<A, B>::MutantStack()
{
    std::cout << "MutantStack default constructor called" << std::endl;
}

template <typename A, typename B>
MutantStack<A, B>::~MutantStack()
{
    std::cout << "MutantStack destructor called" << std::endl;
}

template <typename A, typename B>
MutantStack<A, B>::MutantStack(const MutantStack &c):std::stack<A>(c)
{
    std::cout << "MutantStack copy constructor called" << std::endl;
}

template <typename A, typename B>
MutantStack<A, B> &MutantStack<A, B>::operator=(const MutantStack<A,B> &c)
{
    std::cout << "MutantStack assigment operator called" << std::endl;
    std::stack<A>::operator=(c);
    return *this;
}

template <typename A, typename B>
typename MutantStack<A, B>::iterator MutantStack<A, B>::begin()
{
	return (this->c.begin());
}

template <typename A, typename B>
typename MutantStack<A, B>::iterator MutantStack<A, B>::end()
{
	return (this->c.end());
}

#endif