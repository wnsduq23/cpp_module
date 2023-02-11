/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:10:52 by junykim           #+#    #+#             */
/*   Updated: 2023/02/11 08:31:01 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
std::string const &Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string _type)
{
    this->type = _type;
}