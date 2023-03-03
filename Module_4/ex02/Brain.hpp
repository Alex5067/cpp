/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 13:21:18 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/20 22:12:01 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain 
{
    public:
        std::string ideas[100];
        Brain();
        Brain(const Brain &r);
        Brain &operator=(const Brain &c);
        virtual ~Brain();
};

#endif