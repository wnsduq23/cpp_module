/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 16:09:18 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 17:03:14 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap kim("KIM");
	ClapTrap lee("LEE");

	kim.attack("LEE");
	lee.takeDamage(5);
	
	std::cout << "\n===============================\n";

	lee.attack("KIM");
	kim.takeDamage(8);
	kim.beRepaired(3);
	kim.beRepaired(3);

	std::cout << "\n===============================\n";

	kim.attack("LEE");
	lee.takeDamage(2);
	lee.takeDamage(2);
	lee.takeDamage(2);
	lee.takeDamage(2);
	lee.beRepaired(3);
}