/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:29:43 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/20 22:08:56 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
  std::cout << "Brain default constructor called" << std::endl;
  for (int i = 0; i < 100; i++)
  {
    this->ideas[i] = "Idea";
  }
}

Brain::Brain(const Brain &c)
{
  std::cout << "Brain copy constructor called" << std::endl;
  for (int i = 0; i < 100; i++)
  {
    this->ideas[i] = c.ideas[i];
  }
}

Brain &Brain::operator=(const Brain &r)
{
  std::cout << "Brain assignation operator called" << std::endl;
  for (int i = 0; i < 100; i++)
  {
    this->ideas[i] = r.ideas[i];
  }
  return (*this);
}

Brain::~Brain()
{
  std::cout << "Brain destructor called" << std::endl;
}