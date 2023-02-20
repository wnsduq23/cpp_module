/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:10:42 by junykim           #+#    #+#             */
/*   Updated: 2023/02/20 21:13:05 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name) {}

HumanB::~HumanB()
{
    std::cout << "HumanB " << this->name << " is destroyed" << "\n";
}

void HumanB::setWeapon(Weapon &_weapon)//레퍼런스의 주소를 집어넣은거임??
{
    this->weapon = &_weapon;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << '\n';
}