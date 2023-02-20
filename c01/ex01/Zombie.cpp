/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:40:47 by junykim           #+#    #+#             */
/*   Updated: 2023/02/20 20:20:15 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie default Constructor" << '\n';
}

Zombie::~Zombie()
{
	std::cout << this-> name << " is Died" << '\n';
}

Zombie::Zombie(std::string _name)
{
	name = _name;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << '\n';
}

void Zombie::setZombie(std::string _name)
{
	this->name = _name;
}