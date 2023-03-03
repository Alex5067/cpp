/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:31:48 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/12 10:00:17 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie First("Foo");
    Zombie *Second  = newZombie("Gyk");

    First.announce();
    Second->announce();
    randomChump("Skull");
    delete(Second);
    return 0;
}