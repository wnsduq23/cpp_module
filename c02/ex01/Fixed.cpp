/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:13:19 by junykim           #+#    #+#             */
/*   Updated: 2023/03/04 20:03:54 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixed_point_number_value = 0;
}

Fixed::Fixed(const Fixed& rhs)
{
    std::cout << "Copy constructor called" << std::endl;
	(*this) = rhs;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called\n";
    this->fixed_point_number_value = num << this->fractional_bits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called\n";
    this->fixed_point_number_value = roundf(num * (1 << this->fractional_bits));// ?? 
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called\n";
    this->fixed_point_number_value = rhs.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (this->fixed_point_number_value);
}

void Fixed::setRawBits(int const raw)
{
    this->fixed_point_number_value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixed_point_number_value / (1 << this->fractional_bits)); 
}

int	Fixed::toInt(void) const
{
	return (this->fixed_point_number_value >> this->fractional_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) 
{
        out << fixed.toFloat();
        return (out);
}