/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:41:07 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/03 13:51:14 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal *j = new Cat;
	j->makeSound();
	delete j;

/*
  	Animal j;
 	j.makeSound();
*/

}