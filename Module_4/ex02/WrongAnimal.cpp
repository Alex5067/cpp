/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:59:56 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/03 13:42:39 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
  std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &c)
{
  std::cout << "WrongAnimal copy constructor called" << std::endl;
  this->type = c.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &r)
{
  std::cout << "WrongAnimal assignation operator called" << std::endl;
  this->type = r.type;
  return (*this);
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
  std::cout << "WrongAnimal make a lot of sounds" << std::endl;
}

std::string WrongAnimal::getType() const
{
  return (this->type);
}