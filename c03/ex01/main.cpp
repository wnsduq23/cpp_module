/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:09:18 by junykim           #+#    #+#             */
/*   Updated: 2023/02/21 16:25:44 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("A");
	ScavTrap	b("B");
	ScavTrap	c("C");


	a.setAttackDamage(2);
	b.setAttackDamage(3);
	c.setAttackDamage(4);

	std::cout << std::endl;
	a.attack("B");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;
	b.attack("A");
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;
	c.attack("B");
	b.takeDamage(c.getAttackDamage());
	std::cout << std::endl;
	b.beRepaired(10);
	std::cout << std::endl;
	a.beRepaired(10);
	std::cout << std::endl;
	a.guardGate();
	std::cout << std::endl;
	return (0);
}