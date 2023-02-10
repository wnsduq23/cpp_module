/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:50:19 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 19:05:08 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog Class Default Constructor\n";
}

Dog::~Dog()
{
    std::cout << "Dog Class is destroyed\n";
}

Dog::Dog(const Dog& _rhs)
{
    (*this) = _rhs;
}

Dog& Dog::operator=(const Dog& _rhs)
{
    type = _rhs.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog : barkkkkkkkkkkkkkkkkkkkkk\n";
}