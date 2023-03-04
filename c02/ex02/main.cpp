/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:13:49 by junykim           #+#    #+#             */
/*   Updated: 2023/03/04 20:37:21 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
bool i;

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;

//std::cout << "-----------------\n";
//i = (a > b);
//std::cout << "a > b : " << i << std::endl;
//std::cout << "-----------------\n";
//i = (a < b);
//std::cout << "a < b : " << i << std::endl;
//std::cout << "-----------------\n";
//i = (a >= b);
//std::cout << "a >= b : " << i << std::endl;
//std::cout << "-----------------\n";
//i = (a <= b);
//std::cout << "a <= b : " << i << std::endl;
//std::cout << "-----------------\n";
//i = (a != b);
//std::cout << "a != b : " << i << std::endl;
//std::cout << "-----------------\n";
//i = (a == b);
//std::cout << "a == b : " << i << std::endl;
return 0;
}