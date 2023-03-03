#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

class Span
{
    private:
        std::vector <int> vec;
        unsigned int i;
        unsigned int size;
    public:
        Span();
	    Span(unsigned int N);
	    Span(const Span &c);
	    Span &operator=(const Span &c);
	    ~Span();
        class Full: public std::exception
	    {
		    const char* what() const throw()
            {
                return ("Span already full!");
            }
	    };
	    class NoSpan: public std::exception
	    {
		    const char* what() const throw()
            {
                return ("No span can be found!");
            }
	    };
        void addNumber(int a);
	    int shortestSpan();
	    int longestSpan();
	    void addRange(std::vector<int>::iterator it, std::vector<int>::iterator it2);
};

#endif