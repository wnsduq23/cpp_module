/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:06:23 by junykim           #+#    #+#             */
/*   Updated: 2023/02/20 21:12:04 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : name(_name), weapon(_weapon) {}

HumanA::~HumanA()
{
    std::cout << "HumanA " << this->name << " is destroyed" << "\n";
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << '\n';
}