/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:49:25 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 19:02:39 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat Class Default Constructor\n";
}

Cat::~Cat()
{
    std::cout << "Cat Class is destroyed\n";
}

Cat::Cat(const Cat& _rhs)
{
    (*this) = _rhs;
}

Cat& Cat::operator=(const Cat& _rhs)
{
    type = _rhs.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat : meowwwwwwwwwwwww\n";
}