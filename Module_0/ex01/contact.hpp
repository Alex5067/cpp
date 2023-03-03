/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:07:35 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/18 11:38:40 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class Contact
{
    private:
        std::string f_name;
        std::string l_name;
        std::string nick;
        std::string p_numb;
        std::string d_secret;
        static int index;
    public:
        void set_values();
        std::string get_fname(void) const;
        std::string get_lname(void) const;
        std::string get_nick(void) const;
        std::string get_numb(void) const;
        std::string get_dsecret(void) const;
};


#endif