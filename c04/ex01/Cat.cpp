/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:49:25 by junykim           #+#    #+#             */
/*   Updated: 2023/02/25 20:36:31 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	brain = new Brain();
	type = "Cat";
    std::cout << "Cat Class Default Constructor\n";
}

Cat::~Cat()
{
    std::cout << "Cat Class is destroyed\n";
	delete brain;
}

Cat::Cat(const Cat& _rhs)
{
	std::cout << "Cat Copy Constructor\n";
	brain = new Brain(*(_rhs.brain));
	type = _rhs.type;
    (*this) = _rhs;
}

Cat& Cat::operator=(const Cat& _rhs)
{
	std::cout << "Cat assign\n";
    type = _rhs.type;
	*(this->brain) = *(_rhs.brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat : meowwwwwwwwwwwww\n";
}

void Cat::setIdea(std::string think, int idx)
{
	this->brain->ideas[idx] = think;
}

std::string Cat::getIdea(int idx) const
{
	return (brain->ideas[idx]);
}