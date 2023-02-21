/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:09:28 by junykim           #+#    #+#             */
/*   Updated: 2023/02/21 16:37:47 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "NULL";
    hitPoint = 10;
    energyPoint = 10;
    attackDamage = 0;
    std::cout << "\033[31m ClapTrap Default Constructor Call\033[0m\n";
}

ClapTrap::ClapTrap(std::string _name)
{
    this->name = _name;
    this->hitPoint = 10;
    this->energyPoint = 10;
    this->attackDamage = 0;
    std::cout << "\033[31m" << _name << " is now create, hitPoint : [ "
              << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
              << " ], attackDamage : [ " << this->attackDamage << " ]\033[0m\n";
}

ClapTrap::ClapTrap(const ClapTrap& _rhs)
{
    (*this) = _rhs;
    std::cout << "\033[31m" << name << " is now Copy Create hitPoint : [ "
              << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
              << " ], attackDamage : [ " << this->attackDamage << " ]\033[0m\n";
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
    std::cout << "\033[31mClapTrap " << this->name << " is now Destroyed\033[0m\n";
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
    this->printStat();
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > this->hitPoint)
    {
        this->hitPoint = 0;
        std::cout << this->name << " is die\n";
    }
    else
    {
        this->hitPoint -= amount;
        std::cout << this->name << " has taken " << amount << " damage\n";
        this->printStat();
    }
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
    this->printStat();
}

void ClapTrap::printStat()
{
    std::cout << "\033[34m" << name << " is now hitPoint : [ "
              << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
              << " ], attackDamage : [ " << this->attackDamage << " ]\033[0m\n";
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->attackDamage = amount;
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}