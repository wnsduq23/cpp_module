/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:44:58 by junykim           #+#    #+#             */
/*   Updated: 2023/03/04 21:02:29 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->name = "NULL";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Default Constructor\n";
}

FragTrap::FragTrap(const FragTrap& _rhs): ClapTrap(_rhs)
{
	std::cout << "FragTrap Copy Constructor\n";
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " is now create [ "
            << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\033[0m\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " is now Destroyed\n";
}

FragTrap &FragTrap::operator=(const FragTrap& _rhs)
{
	std::cout << "FragTrap Assignation operator called\n";
	this->name = _rhs.name;
	this->hitPoint = _rhs.hitPoint;
	this->energyPoint = _rhs.energyPoint;
	this->attackDamage = _rhs.attackDamage;
	return (*this);
}

void FragTrap::attack(std::string const& _target)
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
        std::cout << "[FragTrap] " << this->name << " is die\n";
    }
    else
    {
        std::cout << "FragTrap " << this->name << " attacks " << _target << ", causing "
                  << this->attackDamage << " points of damage\n";
        this->energyPoint--;
        this->printStat();
    }
}

void	FragTrap::highFiveGuys()
{
	if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
        std::cout << "[FragTrap] " << this->name << " is die\n";
    }
	else
		std::cout << "FragTrap " << this->name << " do highFive\n";
}