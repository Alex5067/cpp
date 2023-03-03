/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:49:02 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/19 11:13:27 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap copy("first");
	FragTrap first;

	first = copy;
	first.attack("second");
	first.takeDamage(10);
	first.beRepaired(10);
	first.highFivesGuys();
	/*{
		std::cout << "\n ---- FragTrap ----\n";
		FragTrap fr4gtp("fr4gtp");
		fr4gtp.attack("Jack");
		fr4gtp.takeDamage(6);
		fr4gtp.beRepaired(4);
		fr4gtp.takeDamage(3);
		fr4gtp.highFivesGuys();
		fr4gtp.beRepaired(8);
		fr4gtp.takeDamage(17);
	}
	{
		std::cout << "\n ---- ScavTrap ----\n";
		ScavTrap sc4vtp("sc4vtp");
		sc4vtp.attack("Jack");
		sc4vtp.takeDamage(6);
		sc4vtp.beRepaired(4);
		sc4vtp.takeDamage(3);
		sc4vtp.guardGate();
		sc4vtp.beRepaired(8);
		sc4vtp.takeDamage(17);
	}
	{
		std::cout << "\n ---- ClapTrap ----\n";
		ClapTrap cl4ptp("cl4ptp");
		cl4ptp.attack("Jack");
		cl4ptp.takeDamage(6);
		cl4ptp.beRepaired(4);
		cl4ptp.takeDamage(3);
		cl4ptp.beRepaired(8);
		cl4ptp.takeDamage(17);
	} */
}