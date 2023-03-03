/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:05:22 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/03 13:09:57 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Dog default constructor called" << std::endl;
  this->type = "Dog";
}

Dog::Dog(const Dog &r)
{
  std::cout << "Dog copy constuctor called" << std::endl;
  Animal::type = r.Animal::type;
}

Dog &Dog::operator=(const Dog &c)
{
  std::cout << "Dog assignation operator called" << std::endl;
  Animal::type = c.Animal::type;
  return (*this);
}

Dog::~Dog()
{
  std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()
{
  std::cout << "WOOF WOOF!" << std::endl;
}