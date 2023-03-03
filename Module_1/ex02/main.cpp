/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:42:41 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/27 15:55:37 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string	string = "BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;
	
	std::cout << "Address of string:                  " << &string << std::endl;
	std::cout << "Address contained in stringPTR:     " << stringPTR << std::endl;
	std::cout << "Address of stringREF:               " << &stringREF << std::endl;

	std::cout << "--------------------------------------------------------" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}