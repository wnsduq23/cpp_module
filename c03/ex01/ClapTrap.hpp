/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:02:37 by junykim           #+#    #+#             */
/*   Updated: 2023/02/21 16:35:14 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
protected:
  std::string name;
  unsigned int hitPoint;
  unsigned int energyPoint;
  unsigned int attackDamage;

public:
  ClapTrap();
  ClapTrap(std::string _name);
  ClapTrap(const ClapTrap &_rhs);
  virtual ~ClapTrap(); // why virtual ? 

  ClapTrap &operator=(const ClapTrap& _rhs);

  void			setAttackDamage(unsigned int amount);
  unsigned int	getAttackDamage() const;

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

  void printStat();
};
#endif