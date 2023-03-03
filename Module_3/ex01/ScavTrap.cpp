/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:21:03 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/19 11:09:57 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
  std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called with value - " << name <<  std::endl;
    this->name = name;
    this->hp = 100;
    this->ep = 50;
    this->ad = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return;
}

void ScavTrap::guardGate()
{
	std::cout << this->name << " has entered in Gate Keeper mode" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &c)
{
  std::cout << "ScavTrap copy constructor called" << std::endl;
  this->name = c.name;
  this->hp = c.hp;
  this->ep = c.ep;
  this->ad = c.ad;
}
ScavTrap& ScavTrap::operator=(const ScavTrap &r)
{
  std::cout << "ScavTrap assignation operator overload called" << std::endl;
  this->name = r.name;
  this->hp = r.hp;
  this->ep = r.ep;
  this->ad = r.ad;

  return (*this);
}

void ScavTrap::attack(std::string const &target)
{
  std::cout << "ScavTrap " << this->name << " attacked " << target << " causing " << this->ad << " damage" << std::endl;
}