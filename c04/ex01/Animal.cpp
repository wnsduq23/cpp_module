/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:47:37 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 18:59:04 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor\n";
}

Animal::Animal(std::string _type)
{
    this->type = _type;
}

Animal::Animal(const Animal& _rhs)
{
    (*this) = _rhs;
}

Animal &Animal::operator=(const Animal& _rhs)
{
    this->type = _rhs.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destory\n";
}

void Animal::makeSound() const
{
    std::cout << "Animal class Sound\n";
}

std::string Animal::getType() const
{
    return this->type;
}