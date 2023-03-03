/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:02:12 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/19 11:17:32 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
  std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called with value - " << name <<  std::endl;
    this->name = name;
    this->hp = 100;
    this->ep = 100;
    this->ad = 30;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey, give me a high five!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &c)
{
  std::cout << "FragTrap copy constructor called" << std::endl;
  this->name = c.name;
  this->hp = c.hp;
  this->ep = c.ep;
  this->ad = c.ad;
}
FragTrap& FragTrap::operator=(const FragTrap &r)
{
  std::cout << "FragTrap assignation operator overload called" << std::endl;
  this->name = r.name;
  this->hp = r.hp;
  this->ep = r.ep;
  this->ad = r.ad;

  return (*this);
}

void FragTrap::attack(std::string const & target)
{
  std::cout << "FragTrap " << this->name << " attacked " << target << " causing " << this->ad << " damage" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}
