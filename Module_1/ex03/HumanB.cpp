/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:42:44 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/01 14:10:48 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
    std::cout << "HumanB constructor called: " << this->name << std::endl;
    return ;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destructor called: " << this->name << std::endl;
    return ;
}

void HumanB::attack(void)
{
    if (this->weapon == NULL)
        return ;
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weap)
{
    this->weapon = &weap;
}