/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:41:01 by junykim           #+#    #+#             */
/*   Updated: 2023/02/20 20:16:54 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;
	int		zombieNum;
	std::string zombieName;

	std::cout << "Zombie Number : ";
	std::cin >> zombieNum;
	std::cout << "Zombie Name : ";
	std::cin >> zombieName;
	
	zombie = zombieHorde(zombieNum, zombieName);
	for (int i = 0; i < zombieNum; i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
	return (0);
}