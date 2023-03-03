/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:58:39 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/23 12:02:33 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("RandomShrubberyName", 145, 137)
{
  std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("jg", 145, 137)
{
  std::cout << "ShrubberyCreationForm constructor called with target = " << target << std::endl;
  this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & c) : Form(c)
{
  std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
  this->setTarget(c.getTarget());
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
  std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & c)
{
  std::cout << "ShrubberyCreationForm assignation operator overload called" << std::endl;
  this->setTarget(c.getTarget());
  return (*this);
}

Form *ShrubberyCreationForm::create(const std::string target)
{
	Form *ret = new ShrubberyCreationForm(target);

	return (ret);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
  if (this->getSigned() == true && executor.getGrade() <= this->getGradetoexec())
    {
      	std::string fd = this->getTarget() + "_shrubbery";
      	std::ofstream outFile(fd.c_str());
      	if (!outFile.is_open())
        	throw ShrubberyCreationForm::WriteErrException();
		outFile << "                                               |" << std::endl;
		outFile << "                                              -x-" << std::endl;
		outFile << "                                               |" << std::endl;
		outFile << "              v .   ._, |_  .," << std::endl;
		outFile << "           `-._\\/  .  \\ /    |/_" << std::endl;
		outFile << "               \\  _\\, y | \\//" << std::endl;
		outFile << "         _\\_.___\\, \\/ -.\\||" << std::endl;
		outFile << "           `7-,--.`._||  / / ," << std::endl;
		outFile << "           /'     `-. `./ / |/_.'" << std::endl;
		outFile << "                     |    |//" << std::endl;
		outFile << "                     |_    /" << std::endl;
		outFile << "                     |-   |" << std::endl;
		outFile << "                     |   =|" << std::endl;
		outFile << "                     |    |" << std::endl;
		outFile << "--------------------/ ,  . \\--------._" << std::endl;

		outFile << "       _-_" << std::endl;
        outFile << "    /~~   ~~\\" << std::endl;
        outFile << " /~~      __ ~~\\" << std::endl;
        outFile << "{     -         }" << std::endl;
        outFile << " \\  _-     -_  /" << std::endl;
        outFile << "   ~  \\\\ //  ~" << std::endl;
        outFile << "_- -   | |    _" << std::endl;
        outFile << "   -_  | |   -_" << std::endl;
        outFile << "      // \\\\" << std::endl;
    }
  else
    throw Form::GradeTooLowException();
}