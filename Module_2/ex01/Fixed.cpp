/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igoralekseev <igoralekseev@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 09:18:04 by igoraleksee       #+#    #+#             */
/*   Updated: 2022/07/29 11:05:05 by igoraleksee      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fb = 8;

Fixed::Fixed()
{
    this->num = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    this->num = nb << this->fb;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
    this->num = roundf(f * (1 << this->fb));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &s)
{
    num = s.num;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &r)
{
    num = r.num;
    std::cout << "Assignation operator called" << std::endl;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->num;
}

void Fixed::setRawBits(int const raw)
{
    this->num = raw;
    std::cout << "setRawBits member function called" << std::endl;
}

float Fixed::toFloat(void) const
{
    return ((float)this->num / (float(1 << this->num)));
}

int Fixed::toInt(void) const
{
    return (this->num >> this->fb);
}

std::ostream &operator<<(std::ostream &os, const Fixed &c)
{
    os << c.toFloat();
    return (os);
}