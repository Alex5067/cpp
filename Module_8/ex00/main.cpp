#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <iostream>

int main()
{
	{
		std::vector<int> g1;
		std::vector<int>::iterator it;
	
		for (int i = 1; i <= 5; i++)
			g1.push_back(i);
		try
		{
			it = easyfind(g1, 1);
			std::cout << "Found!" << std::endl;
			std::cout << *it << std::endl;
		}
		catch(const char *s)
		{
			std::cerr << s << std::endl;
		}
	}
	{
		std::deque<int> g1;
		std::deque<int>::iterator it;
	
		for (int i = 1; i <= 5; i++)
			g1.push_back(i);
		try
		{
			it = easyfind(g1, 1);
			std::cout << "Found!" << std::endl;
			std::cout << *it << std::endl;
		}
		catch(const char *s)
		{
			std::cerr << s << std::endl;
		}
	}
}