/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:38:35 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/23 12:20:54 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool Signed;
        const int Grade_to_sign;
        const int Grade_to_exec;
    public:
        Form();
        Form(const Form &c);
        Form(std::string n, int gs, int ge);
        Form &operator=(const Form &r);
        ~Form();
        
        std::string getName() const;
        int getGradetosign() const;
        int getGradetoexec() const;
        bool getSigned() const;
        void beSigned(Bureaucrat &s);
        void setSigned(bool s);


  class GradeTooHighException: public std::exception
  {
    const char * what () const throw ()
    {
        return ("Error: The grade you set is too high");
    }
  };

  class GradeTooLowException: public std::exception
  {
    const char * what () const throw ()
    {
        return ("Error: The grade you set is too low");
    }
  };
};


std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif