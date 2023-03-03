/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:47:02 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/19 10:37:33 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string n)
{
    std::cout << "CP constructor called with value - " << n <<  std::endl;
    this->name = n;
    this->hp = 10;
    this->ep = 10;
    this->ad = 0;
}

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->name << " attacked " <<  target << ", causing " << this->ad << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hp -= amount;
    std::cout << "ClapTrap " << this->name << " took " << amount << " of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->hp += amount;
    std::cout << "ClapTrap " << this->name << " repaired with " << amount << " of HP" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &r)
{
  std::cout << "ClapTrap assignation operator overload called" << std::endl;
  this->name = r.name;
  this->hp = r.hp;
  this->ep = r.ep;
  this->ad = r.ad;
  return (*this);
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
  std::cout << "ClapTrap CopyConstructor called" << std::endl;
  this->name = c.name;
  this->hp = c.hp;
  this->ep = c.ep;
  this->ad = c.ad;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl; 
}