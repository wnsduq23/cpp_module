/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:41:05 by junykim           #+#    #+#             */
/*   Updated: 2023/02/20 19:51:24 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie;

	zombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::string str = name + std::to_string(i + 1);
		zombie[i].setZombie(str);
	}
	return (zombie);
}