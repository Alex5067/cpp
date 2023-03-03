/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:18:24 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/23 15:22:18 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &c)
{
	std::cout << "Intern copy constructor called" << std::endl;
	(void) c;
}

Intern &Intern::operator=(const Intern &c)
{
	std::cout << "Intern assignation operator overload called" << std::endl;
	(void) c;
	return (*this);
}

Form  *Intern::makeForm(std::string f, std::string t)
{
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form* (*table[3])(const std::string target);
	
	table[0] = PresidentialPardonForm::create;
	table[1] = RobotomyRequestForm::create;
	table[2] = ShrubberyCreationForm::create;

	int i = 0;

	while (i < 3)
	{
		if (forms[i] == f)
			return (table[i](t));
		i++;
	}
	throw "Error: Form not found";
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}