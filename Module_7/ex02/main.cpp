#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
  /*  Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror; */

	std::cout << "------Simple test------" << std::endl;
    Array<int> a(3);
	a[0] = 43;
	a[1] = -1;
	a[2] = 5;
	int ret = a.size();
	std::cout << "size: "<< ret << std::endl;
	std::cout << "a[1]: " << a[1] << std::endl;
	std::cout << "------test 2------" << std::endl;
	Array<int> *b = new Array<int>();
	try
	{
		std::cout << (*b)[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete b;
	
	std::cout << "------- test with index out of bounds------" << std::endl;
	try
	{
    	Array<char> b(3);
		b[0] = 'a';
		b[1] = 'b';
		b[2] = 'c';
		std::cout << b[-2] << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';	
	}
	std::cout << "------copy constructor------" << std::endl;
	Array<int> c(a);
	for (unsigned int i = 0; i < c.size(); i++)
	{
		std::cout << "c["<<i<<"]= " << c[i] << "\n";
	}

    return 0;
}