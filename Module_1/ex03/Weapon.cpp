/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:42:44 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/27 18:30:50 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
    std::cout << this->type << std::endl;
    return ;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor: " << this->type << std::endl;
    return ;
}

std::string const Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(std::string const type)
{
    this->type = type;
}