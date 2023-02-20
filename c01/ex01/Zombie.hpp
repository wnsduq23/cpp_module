/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:40:56 by junykim           #+#    #+#             */
/*   Updated: 2023/02/20 20:05:43 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
	private:
		std::string name;
		
	public:
		Zombie();
		~Zombie();
		Zombie(std::string _name);

		void	announce();
		void	setZombie(std::string str);
};

Zombie* zombieHorde(int N, std::string name);

#endif