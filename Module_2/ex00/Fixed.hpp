/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:16:30 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/29 09:44:04 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    private:
        int num;
        static const int fb;
    public:
        Fixed();
        Fixed(Fixed const &s);
        Fixed &operator=(const Fixed &r);
        ~Fixed();

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif