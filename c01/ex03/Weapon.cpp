/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:10:52 by junykim           #+#    #+#             */
/*   Updated: 2023/02/20 21:08:50 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

std::string const &Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string _type)
{
    this->type = _type;
}