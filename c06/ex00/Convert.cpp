/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:02:14 by junykim           #+#    #+#             */
/*   Updated: 2023/02/13 17:04:51 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{
	std::cout << "Convert default Constructor\n";
}

Convert::~Convert()
{
	std::cout << "Convert is Destroyed\n";
}

Convert::Convert(const Convert& _convert)
{
	std::cout << "Convert copy Constructor\n";
	(*this) = _convert;
}

Convert& Convert::operator=(const Convert& convert)
{
	this->_valueBits = convert._valueBits;
	return (*this);
}

void    Convert::setValue(std::string s)
{
	
}