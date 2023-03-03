/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:16:30 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/08/03 10:50:14 by igoraleksee      ###   ########.fr       */
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
        bool operator==(const Fixed &s);
        bool operator!=(const Fixed &s);
        bool operator<=(const Fixed &s);
        bool operator>=(const Fixed &s);
        bool operator>(const Fixed &s);
        bool operator<(const Fixed &s);
        Fixed operator+(const Fixed &s);
        Fixed operator-(const Fixed &s);
        Fixed operator*(const Fixed &s);
        Fixed operator/(const Fixed &s);
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        float toFloat(void) const;
        int toInt(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);

        static Fixed &min(Fixed &l, Fixed &r);
        static const Fixed &min(const Fixed &l, const Fixed &r);
        static Fixed &max(Fixed &l, Fixed &r);
        static const Fixed &max(const Fixed &l, const Fixed &r);

        ~Fixed();
};

std::ostream &operator<<(std::ostream &os, const Fixed &c);

#endif