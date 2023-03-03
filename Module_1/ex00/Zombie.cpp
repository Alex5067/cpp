/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:37:53 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/27 15:08:58 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name)
{
    std::cout << this->name << " is ressurected" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " got destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}