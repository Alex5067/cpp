/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 12:41:07 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/20 22:02:12 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    {
	std::cout << "-------------------------------------\n";
    const Animal* meta = new Animal();
	std::cout << "-------------------------------------\n";
    const Animal* j = new Dog();
	std::cout << "-------------------------------------\n";
    const Animal* i = new Cat();
	std::cout << "-------------------------------------\n";
    std::cout << "j type: " << j->getType() << std::endl;
    std::cout << "meta type: " << meta->getType() << std::endl;
    std::cout << "i type: " << i->getType() << std::endl;
	std::cout << "-------------------------------------\n";
    i->makeSound();
    j->makeSound();
    meta->makeSound();
	std::cout << "-------------------------------------\n";
	delete meta;
	delete j;
	delete i;
	std::cout << "-------------------------------------\n";
  }
  std::cout << "\n\n\n";
  {
	std::cout << "-------------------------------------\n";
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* j = new WrongCat();
	std::cout << "-------------------------------------\n";
    j->makeSound();
    meta->makeSound();
	std::cout << "-------------------------------------\n";
	delete meta;
	delete j;
	std::cout << "-------------------------------------\n";
  }
    return 0;
}