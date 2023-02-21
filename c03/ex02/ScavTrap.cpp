/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:03:00 by junykim           #+#    #+#             */
/*   Updated: 2023/02/21 16:01:22 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
  this->name = "NULL";
  this->hitPoint = 100;
  this->energyPoint = 50;
  this->attackDamage = 20;

  std::cout << "\033[32mScavTrap " << this->name << " is now create "
            << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\033[0m\n";
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    this->name = _name;
    this->hitPoint = 100;
    this->energyPoint = 50;
    this->attackDamage = 20;

    std::cout << "\033[32mScavTrap " << this->name << " is now create [ "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\033[0m\n";
}

ScavTrap::ScavTrap(const ScavTrap& _rhs) : ClapTrap(_rhs)
{
    this->name = _rhs.name;
    this->hitPoint = _rhs.hitPoint;
    this->energyPoint = _rhs.energyPoint;
    this->attackDamage = _rhs.attackDamage;

    std::cout << "\033[32m[Copy Constructor] ScavTrap " << this->name << " is now create "
        << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
            << " ], attackDamage : [ " << this->attackDamage << " ]\033[0m\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& _rhs)
{
    this->name = _rhs.name;
    this->hitPoint = _rhs.hitPoint;
    this->energyPoint = _rhs.energyPoint;
    this->attackDamage = _rhs.attackDamage;

    std::cout << "ScavTrap Operator is called\n";
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " is now Destroyed\n";
}

void ScavTrap::guardGate()
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
        std::cout << "[ScavTrap] " << this->name << " is die\n";
    }
    else
    {
        this->hitPoint += 100;
        this->energyPoint -= 3;
        std::cout << "ScavTrap " << this->name << " execute GateGuard\n";
    }
}

void ScavTrap::attack(std::string const& _target)
{
    if (this->hitPoint <= 0 || this->energyPoint <= 0)
    {
        std::cout << "[ScavTrap] " << this->name << " is die\n";
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks " << _target << ", causing "
                  << this->attackDamage << " points of damage\n";
        this->energyPoint--;
        this->printStat();
    }
}

void ScavTrap::printStat()
{
    std::cout << "\033[35m" << name << " is now hitPoint : [ "
              << this->hitPoint << " ], energyPoint : [ " << this->energyPoint
              << " ], attackDamage : [ " << this->attackDamage << " ]\033[0m\n";
}