/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:16:30 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/29 11:00:16 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int num;
        static const int fb;
    public:
        Fixed();
        Fixed(Fixed const &s);
        Fixed(const int nb);
        Fixed(const float f);
        Fixed &operator=(const Fixed &r);
        float toFloat(void) const;
        int toInt(void) const;
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &os, const Fixed &c);

#endif