/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:46:58 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/03 11:24:53 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string.h>

class ClapTrap
{
    private:
        std::string name;
        int hp;
        int ep;
        int ad;
        
    public:
        ClapTrap(std::string n);
        ClapTrap();
        ClapTrap(const ClapTrap &c);
        ClapTrap &operator=(const ClapTrap &r);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ~ClapTrap();
};

#endif