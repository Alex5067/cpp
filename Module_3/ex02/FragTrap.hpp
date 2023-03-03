/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:20:59 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/19 11:33:57 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap();
        FragTrap(const FragTrap &c);
        FragTrap &operator=(const FragTrap &r);
        void highFivesGuys(void);
        void attack(const std::string& target);
        ~FragTrap();

};

#endif