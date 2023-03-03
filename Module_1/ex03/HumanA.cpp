/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:42:44 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/01 14:33:14 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap): weapon(weap), name(name)
{
    std::cout << "HumanA constructor called: " << this->name << std::endl;
    return ;
}

HumanA::~HumanA()
{
    std::cout << "HumanA desstructor called: " << this->name << std::endl;
    return ;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attack with his " << this->weapon.getType() << std::endl;
}