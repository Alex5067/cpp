/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:05:22 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/03 13:17:15 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
  std::cout << "WrongCat default constructor called" << std::endl;
  this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &r)
{
  std::cout << "WrongCat copy constuctor called" << std::endl;
  WrongAnimal::type = r.WrongAnimal::type;
}

WrongCat &WrongCat::operator=(const WrongCat &c)
{
  std::cout << "WrongCat assignation operator called" << std::endl;
  WrongAnimal::type = c.WrongAnimal::type;
  return (*this);
}

WrongCat::~WrongCat()
{
  std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound()
{
  std::cout << "Wrong sound MOOO!" << std::endl;
}