/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:16:35 by junykim           #+#    #+#             */
/*   Updated: 2023/02/08 14:22:00 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	std::string	name;

public:
	Zombie(std::string name);
	void	announce();
	~Zombie();
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif