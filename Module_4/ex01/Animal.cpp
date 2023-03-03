/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:59:56 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/03 13:41:29 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
  std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &c)
{
  std::cout << "Animal copy constructor called" << std::endl;
  this->type = c.type;
}

Animal &Animal::operator=(const Animal &r)
{
  std::cout << "Animal assignation operator called" << std::endl;
  this->type = r.type;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
  std::cout << "Animals make a lot of sounds" << std::endl;
}

std::string Animal::getType() const
{
  return (this->type);
}