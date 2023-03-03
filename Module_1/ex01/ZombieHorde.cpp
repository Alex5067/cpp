/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:06:30 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/27 15:14:28 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
    Zombie *zzz = new Zombie[N];
    if (!zzz)
        return (NULL);
    for (int i = 0; i < N; i++)
        zzz[i].setName(name);
    return zzz;

}