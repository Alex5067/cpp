/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 03:20:16 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/18 11:40:49 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.hpp"

int Contact::index = 0;
static int amount_ct = 0;

void Book::add( void )
{
	this->contacts[amount_ct % 8].set_values();
}

void Contact::set_values(void)
{
    if (amount_ct == 8)
        std::cout << "The memory is full and the contacts will be overwriten!" << std::endl;
    std::cout << "First name: ";
    std::cin.ignore();
	std::getline(std::cin, this->f_name);
	std::cout << "Last name: ";
	std::getline(std::cin, this->l_name);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->nick);
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->p_numb);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->d_secret);
	std::cout << "Contact " << this->nick << " created" << std::endl;
	this->index = (this->index + 1) % 8;
	if (amount_ct < 8)
		amount_ct++;
}

void Book::seacrh(void)
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < amount_ct; i++)
    {
        std::cout << "|" << std::setw(10) << i;
		if (Book::contacts[i].get_fname().size() > 10)
			std::cout << "|" << std::setw(10) << Book::contacts[i].get_fname().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << Book::contacts[i].get_fname();
		if (Book::contacts[i].get_lname().size() > 10)
			std::cout << "|" << std::setw(10) << Book::contacts[i].get_lname().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << Book::contacts[i].get_lname();
		if (Book::contacts[i].get_nick().size() > 10)
			std::cout << "|" << std::setw(10) << Book::contacts[i].get_nick().substr(0, 9) + ".";
		else
			std::cout << "|" << std::setw(10) << Book::contacts[i].get_nick();
		std::cout << "|" << std::endl;
    }
    if (amount_ct > 0)
	{
		std::cout << "Enter an index between 0 and " << amount_ct - 1 << "> ";
		int		index;
		std::cin >> index;
		if (index >= 0 && index <= amount_ct - 1)
		{
			std::cout << "First Name: " << Book::contacts[index].get_fname() << std::endl;
			std::cout << "Last Name: " << Book::contacts[index].get_lname() << std::endl;
			std::cout << "Nick Name: " << Book::contacts[index].get_nick() << std::endl;
			std::cout << "Phone Number: " << Book::contacts[index].get_numb() << std::endl;
			std::cout << "Darkest Secret: " << Book::contacts[index].get_dsecret() << std::endl;
		}
		else
			std::cout << "Index out of range." << std::endl;
	}
} 