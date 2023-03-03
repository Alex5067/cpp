/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:36:02 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/01 14:10:55 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;

    public:
        HumanB(std::string const name);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon &type);
};

#endif