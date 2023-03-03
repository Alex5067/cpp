#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Func.hpp"

int	main()
{
	{
		std::cout << "-------------------------------------" << std::endl;
		Base *test = new Base;

		identify(test);
		delete test;
		std::cout << "-------------------------------------" << std::endl;
	}
	{
		std::cout << "-------------------------------------" << std::endl;
		Base *test = generate(); //class A
		Base &s = *test; //class A

		identify(test);
		identify(s);
		delete test;
		std::cout << "-------------------------------------" << std::endl;
	}
	return (1);
}