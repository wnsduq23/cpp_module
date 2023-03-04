/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:12:54 by junykim           #+#    #+#             */
/*   Updated: 2023/03/04 19:39:46 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) 
{
  Fixed a;
  Fixed b(a); // copy destructor
  Fixed c;
  c = b; // assign operator
  std::cout << "-----------------\n";
  std::cout << "a's " << a.getRawBits() << std::endl;
  std::cout << "-----------------\n";
  std::cout << "b's " << b.getRawBits() << std::endl;
  std::cout << "-----------------\n";
  std::cout << "c's " << c.getRawBits() << std::endl;
  return 0;
}