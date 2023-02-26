/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:50:19 by junykim           #+#    #+#             */
/*   Updated: 2023/02/25 20:38:51 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	brain = new Brain();
    std::cout << "Dog Class Default Constructor\n";
}

Dog::~Dog()
{
    std::cout << "Dog Class is destroyed\n";
	delete brain;
}

Dog::Dog(const Dog& _rhs)
{
	std::cout << "Dog Copy Constructor\n";
	brain = new Brain();
	*(this->brain) = *(_rhs.brain);
    (*this) = _rhs;
}

Dog& Dog::operator=(const Dog& _rhs)
{
	std::cout << "Dog assign\n";
    type = _rhs.type;
	*(this->brain) = *(_rhs.brain);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog : barkkkkkkkkkkkkkkkkkkkkk\n";
}

void Dog::setIdea(std::string think, int idx)
{
    this->brain->ideas[idx] = think;
}

std::string Dog::getIdea(int idx) const
{
    return (brain->ideas[idx]);
}