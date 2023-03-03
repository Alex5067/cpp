/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:45:00 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/04 14:45:06 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "-------test 1: Attempting to create a Bureaucrat with an invalid grade ------" << std::endl;
	try
	{
		Bureaucrat b("b1", 151);
		std::cout << b << std::endl;
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
	std::cout << "-------test 2: the grade gets too high ------" << std::endl;
	try
	{
		Bureaucrat b("b1", 1);
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
		b.inc();
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;

	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
	std::cout << "-------test 3: the grade gets too low ------" << std::endl;
	try
	{
		Bureaucrat b("b1", 150);
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
		b.dec();
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}

	std::cout << "-------test 4: correct creation of Bureaucrat  ------" << std::endl;
	try
	{
		Bureaucrat b("b1", 2);
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
		b.dec();
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
		b.inc();
		std::cout << b << std::endl;
		std::cout << "-----------------" << std::endl;
	}
	catch(std::exception& e1)
	{
		std::cerr << e1.what() << '\n';
	}
}