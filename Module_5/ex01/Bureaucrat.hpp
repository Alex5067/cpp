/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:20:32 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/23 10:54:25 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string.h>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat();
    Bureaucrat(std::string n, int g);
    Bureaucrat(const Bureaucrat &c);
    Bureaucrat &operator=(const Bureaucrat &r);
    ~Bureaucrat();

    class GradeTooHighException: public std::exception
    {
        const char* what() const throw()
        {
            return ("The grade you set is too high");
        }
    };
    
    class GradeTooLowException: public std::exception
    {
        const char* what() const throw()
        {
            return ("The grade you set is too low");
        }
    };

    std::string getName() const;
    int getGrade() const;
    void signForm(Form &c);
    void inc();
    void dec();
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif