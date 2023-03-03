/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:05:22 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/03 13:07:20 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
  std::cout << "Cat default constructor called" << std::endl;
  this->type = "Cat";
}

Cat::Cat(const Cat &r)
{
  std::cout << "Cat copy constuctor called" << std::endl;
  Animal::type = r.Animal::type;
}

Cat &Cat::operator=(const Cat &c)
{
  std::cout << "Cat assignation operator called" << std::endl;
  Animal::type = c.Animal::type;
  return (*this);
}

Cat::~Cat()
{
  std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()
{
  std::cout << "MEOW!" << std::endl;
}