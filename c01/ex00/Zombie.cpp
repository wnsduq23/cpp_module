/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:11:05 by junykim           #+#    #+#             */
/*   Updated: 2023/02/08 14:16:55 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string naming)
{
	name = naming;
}

Zombie::~Zombie()// 소멸자는 언제 실행되지 ? 
{
	std::cout << name << " is died " << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; // endl을 꼭 써야하나?
}