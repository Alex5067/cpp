/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:43:38 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/05 12:24:41 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
  std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g): name(n), grade(g)
{
  std::cout << "Bureaucrat constructor called with values " << n << " and " << g << std::endl;
  if (this->grade > 150)
    throw Bureaucrat::GradeTooLowException();
  else if (this->grade < 1)
    throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &c): name(c.name)
{
  std::cout << "Bureaucrat copy constructor called" << std::endl;
  this->grade = c.grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &r)
{
	std::cout << "Bureaucrat assignement operator called" << std::endl;
	this->grade = r.grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
  return (this->name);
}

int Bureaucrat::getGrade() const
{
  return (this->grade);
}

void Bureaucrat::inc()
{
	if (this->grade - 1 > 150)
    	throw Bureaucrat::GradeTooLowException();
 	 else if (this->grade - 1 < 1)
    	throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::dec()
{
	if (this->grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade + 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
  o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
  return (o);
}

void Bureaucrat::signForm(Form &c)
{
  try 
  {
    c.beSigned(*this);
    std::cout << this->getName() << " succesfuly signed" << std::endl;
  }
  catch (std::exception &e) 
  {
    std::cout << this->getName() << " couldn't sign " << c.getName() << " because " << e.what() << std::endl;
  }
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "Bureaucrat destructor called" << std::endl;
}