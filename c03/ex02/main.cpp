/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:52:44 by junykim           #+#    #+#             */
/*   Updated: 2023/03/04 21:01:30 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap a("A");
	ScavTrap b("B");

	FragTrap c("C");
	FragTrap d("D");

	c.attack("D");
	d.takeDamage(20);
	d.beRepaired(10);

	std::cout << "==============================\n";

	d.attack("C");
	c.takeDamage(20);
	c.highFiveGuys();

	std::cout << "==============================\n";

	d.attack("C");
	c.takeDamage(70);
	c.takeDamage(10);
	c.attack("D");
	c.beRepaired(10);
	c.highFiveGuys();
}