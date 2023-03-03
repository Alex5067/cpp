#include "Span.hpp"

Span::Span()
{
    std::cout << "Span constructor called" << std::endl;
    this->size = 0;
    this->i = 0;
}

Span::Span(unsigned int N)
{
    std::cout << "Span constructor called with value " << N << std::endl;
    this->size = N;
    this->i = 0;
}

Span::Span(const Span &c)
{
    std::cout << "Span copy constructor called" << std::endl;
    this->size = c.size;
    this->i = 0;
    this->vec = c.vec;
}

Span &Span::operator=(const Span &c)
{
    std::cout << "Span assignation operator called" << std::endl;
    this->size = c.size;
    this->i = c.i;
    this->vec = c.vec;
    return (*this);
}

Span::~Span()
{
    std::cout << "Span destructor called" << std::endl;
}

void Span::addNumber(int a)
{
    if (this->i < this->size)
    {
        this->vec.push_back(a);
        this->i++;
    }
    else
        throw Span::Full();
}

void Span::addRange(std::vector<int>::iterator it, std::vector<int>::iterator it2)
{
    while (it != it2)
    {
        this->addNumber(*it);
        it++;
    }
}

int		Span::longestSpan()
{
	if (this->vec.size() <= 1)
		throw Span::NoSpan();
	return (*std::max_element(this->vec.begin(), this->vec.end())
		- *std::min_element(this->vec.begin(), this->vec.end()));
}

int		Span::shortestSpan()
{
	if (this->vec.size() <= 1)
		throw NoSpan();
	std::vector<int> sorted = this->vec;
	std::sort(sorted.begin(), sorted.end());
	int ret = sorted[1] - sorted[0];
	for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		if (ret > sorted[i + 1] - sorted[i])
			ret = sorted[i + 1] - sorted[i];
	}
	return (ret);
}