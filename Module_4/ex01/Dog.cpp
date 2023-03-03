/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:05:22 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/03 13:42:14 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
  std::cout << "Dog default constructor called" << std::endl;
  this->type = "Dog";
  this->brain = new Brain;
}

Dog::Dog(const Dog &r)
{
  std::cout << "Dog copy constuctor called" << std::endl;
  Animal::type = r.Animal::type;
  this->brain = new Brain;
  *this->brain = *r.brain;
}

Dog &Dog::operator=(const Dog &c)
{
  std::cout << "Dog assignation operator called" << std::endl;
  Animal::type = c.Animal::type;
  this->brain = new Brain;
  *this->brain = *c.brain;
  return (*this);
}

Dog::~Dog()
{
  std::cout << "Dog destructor called" << std::endl;
  delete brain;
}

void Dog::makeSound() const
{
  std::cout << "WOOF WOOF!" << std::endl;
}