/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:11:10 by junykim           #+#    #+#             */
/*   Updated: 2023/02/13 15:03:43 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.\n" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Harl::harlFilter(int idx)
{
	switch (idx)
	{
		case 0:
		this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
		{
			this->error();
			break ;
		}
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
void Harl::complain(std::string level)
{
    std::string message[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
    for (i = 0; i < 4; i++)
    {
        if (message[i] == level)
          break;
    }

	harlFilter(i);
}