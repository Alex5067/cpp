/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:49:02 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/19 10:37:43 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap copy("first");
    ScavTrap first;

    first = copy;
    first.attack("second");
    first.takeDamage(10);
    first.beRepaired(10);
    first.guardGate();
}