/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:13:58 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 15:58:39 by junykim          ###   ########.fr       */
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

Fixed const &Fixed::operator=(const Fixed &rhs)
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

float	Fixed::toFloat(void) const
{
	return ((float)this->fixed_point_number_value / (1 << this->fractional_bits)); 
}

int	Fixed::toInt(void) const
{
	return (this->fixed_point_number_value >> this->fractional_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
        out << fixed.toFloat();
        return (out);
}

bool    Fixed::operator>(Fixed const &fixed) const
{
    return this->fixed_point_number_value > fixed.fixed_point_number_value;
}

bool    Fixed::operator<(Fixed const &fixed) const
{
    return this->fixed_point_number_value < fixed.fixed_point_number_value;
}

bool    Fixed::operator>=(Fixed const &fixed) const
{
    return this->fixed_point_number_value >= fixed.fixed_point_number_value;
}

bool    Fixed::operator<=(Fixed const &fixed) const
{
    return this->fixed_point_number_value <= fixed.fixed_point_number_value;
}

bool    Fixed::operator==(Fixed const &fixed) const
{
    return this->fixed_point_number_value == fixed.fixed_point_number_value;
}

bool    Fixed::operator!=(Fixed const &fixed) const
{
    return this->fixed_point_number_value != fixed.fixed_point_number_value;
}

Fixed const Fixed::operator+(Fixed const &fixed)
{
    Fixed   tmp(toFloat() + fixed.toFloat());
    return tmp;
}

Fixed const Fixed::operator-(Fixed const &fixed)
{
    Fixed   tmp(toFloat() - fixed.toFloat());
    return tmp;
}

Fixed const Fixed::operator*(Fixed const &fixed)
{
    Fixed   tmp(toFloat() * fixed.toFloat());
    return tmp;
}

Fixed const Fixed::operator/(Fixed const &fixed)
{
    Fixed   tmp(toFloat() / fixed.toFloat());
    return tmp;
}

Fixed const Fixed::operator++()
{
    ++this->fixed_point_number_value;
    return *this;
}

Fixed const  Fixed::operator++(int)
{
    Fixed   tmp;

    tmp = *this;
    this->fixed_point_number_value++;
    return tmp;
}

Fixed const Fixed::operator--()
{
    --this->fixed_point_number_value;
    return *this;
}

Fixed const Fixed::operator--(int)
{
    Fixed   tmp;

    tmp = *this;
    this->fixed_point_number_value--;
    return tmp;
}

Fixed   Fixed::min(Fixed a, Fixed b) {
    if (a < b)
        return a;
    else
        return b;
}

Fixed   Fixed::max(Fixed a, Fixed b) {
    if (a > b)
        return a;
    else
        return b;
}