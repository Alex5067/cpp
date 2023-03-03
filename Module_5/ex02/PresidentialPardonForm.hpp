/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:02:00 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/23 12:01:30 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class PresidentialPardonForm: public Form
{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &c );
        PresidentialPardonForm &operator=(const PresidentialPardonForm &c);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const & executor) const;
        Form *create(const std::string target);
};

#endif