/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:11:42 by junykim           #+#    #+#             */
/*   Updated: 2023/02/09 17:56:22 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    while (1)
    {
        Harl harl;
        std::string cmd;
        std::cin >> cmd;

        harl.complain(cmd);
    }
}