/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:45:00 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/24 16:54:57 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << "-------test 1: ------" << std::endl;
	Bureaucrat exec("sad", 40);
	Intern someRandomIntern;
	Form* rrf = NULL;
	try
	{
		rrf = someRandomIntern.makeForm("robotodmy request", "Bender");
		rrf->beSigned(exec);
		rrf->execute(exec);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(char const* str)
	{
		std::cerr << str << '\n';
	}
	delete rrf;
}