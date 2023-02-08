/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:18:09 by junykim           #+#    #+#             */
/*   Updated: 2023/02/08 14:18:12 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;

    randomChump("Lee");
    zombie = newZombie("Kim");
    zombie->announce();
    delete zombie;
    return (0);
}