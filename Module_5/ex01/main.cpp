/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:45:00 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/23 12:41:51 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		try
		{
			Bureaucrat _bu("battata", 1);
			Form  _f("hhh", 15, 15);
			_f.beSigned(_bu);
			std::cout << _f;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "-------test 1: ------" << std::endl;
		try
		{
			Bureaucrat b("b1",1);
			std::cout << b;
			Form f("f1", 1, 2);
			f.beSigned(b);
			std::cout << f;
		}
		catch(std::exception& e1)
		{
			std::cerr << e1.what() << '\n';
		}
		std::cout << "-------test 2: ------" << std::endl;

		try
		{
			Form f("f2", 20 , 14);
			Bureaucrat b("b2", 21);
			std::cout << b;
			f.beSigned(b);
			std::cout << f;
			b.dec();
			std::cout << b;
			f.beSigned(b);
			std::cout << f;
		}
		catch(std::exception& e1)
		{
			std::cerr << e1.what() << '\n';
		}

		std::cout << "-------test 3: ------" << std::endl;

		try 
		{
        	Form f1 = Form("form1", 10, 5);
        	Bureaucrat b1 = Bureaucrat("Bob", 30);
        	Bureaucrat b2 = Bureaucrat("Jhon", 1);

        	b1.signForm(f1);
        	b2.signForm(f1);

        	Form f2 = Form("from2", 0, 5);
    	}
    	catch (std::exception & e) 
		{
        std::cout << "Exception: " << e.what() << std::endl;
    	}
	}
}