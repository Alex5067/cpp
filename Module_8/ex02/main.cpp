#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << "**********************************************************" << std::endl;
	std::cout << "-------- MutantStack test! --------" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << "mstack top element: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "Size of the mstack: " << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	std::cout << "**********************************************************" << std::endl;
	std::cout << "-------- MutantStack copy and assignment test! --------" << std::endl;
		std::stack<int> s(mstack);
		std::cout << "stack top element: " << s.top() << std::endl;

		MutantStack<int> cp1(mstack);
		std::cout << "cp top element: " << cp1.top() << std::endl;

		MutantStack<int> cp2;
		cp2 = mstack;
		std::cout << "cp top element: " << cp2.top() << std::endl;
	}
	std::cout << "**********************************************************" << std::endl;
	std::cout << "-------- list test! --------" << std::endl;
	{
		std::list<int> lstack;
		lstack.push_back(5);
		lstack.push_back(17);
		std::cout << "lstack top element: " << lstack.back() << std::endl;
		lstack.pop_back();
		std::cout << "Size of the lstack: " << lstack.size() << std::endl;
		lstack.push_back(3);
		lstack.push_back(5);
		lstack.push_back(737);
		lstack.push_back(0);
		std::list<int>::iterator it = lstack.begin();
		std::list<int>::iterator ite = lstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << "**********************************************************" << std::endl;
	return 0;
}