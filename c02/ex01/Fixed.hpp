/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:13:39 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 15:06:33 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
  int				fixed_point_number_value;
  static const int	fractional_bits = 8;

public:
  Fixed();
  Fixed(const Fixed &rhs);
  Fixed(const int num);
  Fixed(const float num);
  ~Fixed();

  Fixed &operator=(const Fixed &rhs);

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
};

std::ostream& operator <<(std::ostream &out, const Fixed &fixed);
#endif