/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:53:32 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/23 15:26:32 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H
#include <iostream>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    public:
	    ShrubberyCreationForm();
	    ShrubberyCreationForm(std::string target);
	    ShrubberyCreationForm(ShrubberyCreationForm const & c);
	    ~ShrubberyCreationForm();
	    ShrubberyCreationForm & operator=(ShrubberyCreationForm const & c);
	    void execute(Bureaucrat const & executor) const;
		static Form *create(const std::string target);
	    class WriteErrException: public std::exception
	    {
		    public:
			    virtual const char* what() const throw()
                {
                    return ("Error: unable to writle to file");
                }
	    };
};

#endif