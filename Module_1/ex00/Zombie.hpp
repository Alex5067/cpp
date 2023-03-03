/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:34:22 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/27 15:08:40 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie 
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie(void);

        void announce(void);
    
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif