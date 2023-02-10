/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:09:28 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 17:02:36 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "NULL";
    hitPoint = 0;
    energyPoint = 0;
    attackDamage = 0;
    std::cout << "name : [" << name << "] hitPoint : [ "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

ClapTrap::ClapTrap(std::string _name)
{
    this->name = _name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
    std::cout << "name : [" << name << "] hitPoint : [ "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

ClapTrap::ClapTrap(const ClapTrap& _rhs)
{
    this->name = _rhs.name;
    this->attackDamage = _rhs.attackDamage;
    this->energyPoint = _rhs.energyPoint;
    this->hitPoint = _rhs.hitPoint;
    std::cout << "name : [" << name << "] hitPoint : [ "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap& _rhs)
{
    this->name = _rhs.name;
    this->attackDamage = _rhs.attackDamage;
    this->energyPoint = _rhs.energyPoint;
    this->hitPoint = _rhs.hitPoint;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << this->name << " is now destroyed\n";
}

void ClapTrap::attack(const std::string &target)
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
        std::cout << this->name << " can't do anything\n";
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
        << this->attackDamage << " points of damage\n";
    this->energyPoint--;
    std::cout << "name : [" << name << "] hitPoint : [ "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > this->hitPoint)
        this->hitPoint = 0;
    else
    {
        this->hitPoint -= amount;
        std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage\n";
    }
    
    if (this->hitPoint == 0)
    {
        std::cout	<< "ClapTrap " << this->name << " is die\n";
    }
    std::cout << "name : [" << name << "] hitPoint : [ "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
		std::cout << this->name << " can't do anything\n";
        return ;
	}
    this->hitPoint += amount;
    this->energyPoint--;
    std::cout << this->name << " has been repaired of " << amount << " Hit points\n";
    std::cout << "name : [" << name << "] hitPoint : [ "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\n";
}