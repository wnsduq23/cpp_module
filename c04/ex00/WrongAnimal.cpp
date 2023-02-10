/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:51:05 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 19:06:54 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default Constructor\n";
}

WrongAnimal::WrongAnimal(std::string _type)
{
    this->type = _type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& _rhs)
{
    (*this) = _rhs;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& _rhs)
{
    this->type = _rhs.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal is destroyed\n";
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal class Sound\n";
}

std::string WrongAnimal::getType() const
{
    return this->type;
}