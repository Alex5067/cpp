/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:49:02 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/19 10:37:08 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap cp("first");
    ClapTrap first;

    first = cp;
    first.attack("second");
    first.takeDamage(10);
    first.beRepaired(10);
    return 0;
}