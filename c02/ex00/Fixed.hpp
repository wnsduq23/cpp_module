/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:12:19 by junykim           #+#    #+#             */
/*   Updated: 2023/02/21 13:13:44 by junykim          ###   ########.fr       */
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
  Fixed(const Fixed &rhs);
  ~Fixed();

  Fixed &operator=(const Fixed &rhs);

  int getRawBits(void) const;
  void setRawBits(int const raw);
};
#endif