/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:51:42 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 19:09:40 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat Class Default Constructor\n";
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Class Destroy\n";
}

WrongCat::WrongCat(const WrongCat& _rhs)
{
    (*this) = _rhs;
}

WrongCat& WrongCat::operator=(const WrongCat& _rhs)
{
    type = _rhs.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat : meowwwwwwwwwwwwwww\n";
}
