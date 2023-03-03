/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:51:45 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/23 12:02:59 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RandomRobotName", 72, 45)
{
  std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robot", 72, 45)
{
  std::cout << "RobotmyRequestForm constructor called with target = " << target << std::endl;
  this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & c) : Form(c)
{
  std::cout << "RobotmyRequestForm copy constructor called" << std::endl;
  this->setTarget(c.getTarget());
}

RobotomyRequestForm::~RobotomyRequestForm()
{
  std::cout << "RobotmyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & c)
{
  std::cout << "RobotmyRequestForm assignation operator overload called" << std::endl;
  this->setTarget(c.getTarget());
  return (*this);
}

Form *RobotomyRequestForm::create(const std::string target)
{
	Form *ret = new RobotomyRequestForm(target);

	return (ret);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
  if (this->getSigned() == true && executor.getGrade() <= this->getGradetoexec())
    {
      std::cout << "Some drilling noises" << std::endl;
      srand(time(0));
      int nbr = rand();
      if (nbr % 2 < 0.5)
        std::cout << this->getTarget() << " has been robotomized successfully 50% of the time " << std::endl;
      else
        std::cout << this->getTarget() << " has been not robotomized the remaining 50% of the time " << std::endl;
    }
  else
    throw Form::GradeTooLowException();
}