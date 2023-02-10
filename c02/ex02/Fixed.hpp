/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:13:54 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 15:59:28 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
  int fixed_point_number_value;
  static const int fractional_bits = 8;

public:
  Fixed();
  Fixed(int num);
  Fixed(float num);
  Fixed(Fixed const &fixed);
  ~Fixed();

  Fixed const &operator=(const Fixed &rhs);

  int getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;

  bool operator>(Fixed const &ref) const;
  bool operator<(Fixed const &ref) const;
  bool operator>=(Fixed const &ref) const;
  bool operator<=(Fixed const &ref) const;
  bool operator==(Fixed const &ref) const;
  bool operator!=(Fixed const &ref) const;

  Fixed const operator+(Fixed const &ref);
  Fixed const operator-(Fixed const &ref);
  Fixed const operator*(Fixed const &ref);
  Fixed const operator/(Fixed const &ref);

  Fixed const operator++();
  Fixed const operator++(int);
  Fixed const operator--();
  Fixed const operator--(int);

  Fixed static min(Fixed a, Fixed b);
  Fixed static max(Fixed a, Fixed b);
};

std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);
#endif