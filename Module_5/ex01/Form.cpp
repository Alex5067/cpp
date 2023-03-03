/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:38:33 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/23 10:51:25 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("None"), Signed(false), Grade_to_sign(150), Grade_to_exec(150)
{
  std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string n, int gs, int ge): name(n), Signed(false), Grade_to_sign(gs), Grade_to_exec(ge)
{
	std::cout << "Form constructor called with values " << n << " and " << gs << " and " << ge << std::endl;
	if (this->Grade_to_sign > 150 || this->Grade_to_exec > 150)
		throw Form::GradeTooLowException();
	else if (this->Grade_to_sign < 1 || this->Grade_to_exec < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &c): name(c.name), Signed(false), Grade_to_sign(c.Grade_to_sign), Grade_to_exec(c.Grade_to_exec)
{
	std::cout << "Form copy constructor called" << std::endl;
	if (this->Grade_to_sign > 150 || this->Grade_to_exec > 150)
		throw Form::GradeTooLowException();
	else if (this->Grade_to_sign < 1 || this->Grade_to_exec < 1)
		throw Form::GradeTooHighException();
}

Form &Form::operator=(const Form &r)
{
  std::cout << "Form assignment operator overload called" << std::endl;
  this->Signed = r.Signed;
  return (*this);
}

Form::~Form()
{
  std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName() const
{
  return (this->name);
}
int Form::getGradetosign() const
{
  return (this->Grade_to_sign);
}
int Form::getGradetoexec() const
{
  return (this->Grade_to_exec);
}

bool Form::getSigned() const
{
  return (this->Signed);
}

void Form::setSigned(bool s)
{
  this->Signed = s;
}

void Form::beSigned(Bureaucrat &s)
{
  if (s.getGrade() <= this->Grade_to_sign)
    this->Signed = true;
  else
    throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Form const & rhs)
{
	if (rhs.getSigned() == true)
		o << "Form " << rhs.getName() << " is successfully signed" << std::endl;
	else
		o << "Form " << rhs.getName() << " is not signed" << std::endl;
	return (o);
}