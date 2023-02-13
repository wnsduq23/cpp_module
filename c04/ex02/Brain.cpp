/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:14:34 by junykim           #+#    #+#             */
/*   Updated: 2023/02/13 11:52:23 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "Default Thinking";
    }
    std::cout << "Brain Default constructor\n";
}

Brain::~Brain()
{
	std::cout << "Brain is Destroyed\n";
}

Brain::Brain(const Brain& brain)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
    std::cout << "Brain Copy Constuctor\n";
}

Brain& Brain::operator= (const Brain& brain)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = brain.ideas[i];
	return (*this);
}