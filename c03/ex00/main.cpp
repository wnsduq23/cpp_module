/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:09:18 by junykim           #+#    #+#             */
/*   Updated: 2023/02/21 16:06:51 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap kim("KIM");
	kim.setAttackDamage(4);
	ClapTrap lee("LEE");
	lee.setAttackDamage(2);

	std::cout << "\n===============================\n";

	kim.attack("LEE");
	lee.takeDamage(kim.getAttackDamage());
	
	std::cout << "\n===============================\n";

	lee.attack("KIM");
	kim.takeDamage(lee.getAttackDamage());
	kim.beRepaired(3);
	lee.beRepaired(3);

	std::cout << "\n===============================\n";

	kim.attack("LEE");
	lee.takeDamage(kim.getAttackDamage());
	kim.attack("LEE");
	lee.takeDamage(kim.getAttackDamage());
	kim.attack("LEE");
	lee.takeDamage(kim.getAttackDamage());


	return (0);
}