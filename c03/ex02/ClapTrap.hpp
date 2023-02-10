/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:02:37 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 16:42:47 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
	std::string 	name;
	unsigned int	hitPoint;
	unsigned int	energyPoint;
	unsigned int	attackDamage;

      public:
        ClapTrap();
        ClapTrap(std::string _name);
        ClapTrap(const ClapTrap &_rhs);
        ~ClapTrap();

        ClapTrap &operator=(const ClapTrap &_rhs);

        void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};
#endif