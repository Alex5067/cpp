/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:35:18 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/27 15:35:53 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int	N = 2;
	Zombie	*zombieptr;
	Zombie	Jeff("Jeff");

	Jeff.announce();
	zombieptr = zombieHorde(N, "Hordemember");
	if (!zombieptr)
		return (0);
	for (int i = 0; i < N; i++)
		zombieptr[i].announce();
	delete[] zombieptr;
}