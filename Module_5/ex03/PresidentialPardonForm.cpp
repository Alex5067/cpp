/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:44:30 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/23 12:01:11 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialName", 25, 5)
{
  std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential", 25, 5)
{
  std::cout << "PresidentialPardonForm constructor called with target = " << target << std::endl;
  this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &c): Form(c.getName(), c.getGradetosign(), c.getGradetoexec())
{
  std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
  this->setTarget(c.getTarget());
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &c)
{
  std::cout << "PresidentialPardonForm assignation operator called" << std::endl;
  this->setTarget(c.getTarget());
  return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
  std::cout << "PresidentialPardonForm destructor called" << std::endl;
}


void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
  if (this->getSigned() == true && this->getGradetoexec() > executor.getGrade())
    std::cout << this->getTarget()<< " has been pardoned by Zafod Beeblebrox" << std::endl;
  else
    throw Form::GradeTooLowException();
}

Form *PresidentialPardonForm::create(const std::string target)
{
	Form *ret = new PresidentialPardonForm(target);

	return (ret);
}