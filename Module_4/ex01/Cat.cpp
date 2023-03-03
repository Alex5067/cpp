/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:05:22 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/03 13:41:57 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
  std::cout << "Cat default constructor called" << std::endl;
  this->type = "Cat";
  this->brain = new Brain;
}

Cat::Cat(const Cat &r)
{
  std::cout << "Cat copy constuctor called" << std::endl;
  Animal::type = r.Animal::type;
  this->brain = new Brain;
  *this->brain = *r.brain;
}

Cat &Cat::operator=(const Cat &c)
{
  std::cout << "Cat assignation operator called" << std::endl;
  Animal::type = c.Animal::type;
  *this->brain = *c.brain;
  return (*this);
}

Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
  delete brain;
}

void Cat::makeSound() const
{
  std::cout << "MEOW!" << std::endl;
}