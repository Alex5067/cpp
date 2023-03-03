/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 03:09:11 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/18 13:50:04 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string Contact::get_fname(void) const
{
    return (this->f_name); 
}

std::string Contact::get_lname(void) const
{
    return (this->l_name);
}

std::string Contact::get_nick(void) const 
{
    return (this->nick);
}
std::string Contact::get_numb(void) const
{
    return (this->p_numb);
}

std::string Contact::get_dsecret(void) const
{
    return (this->d_secret);
}
