/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:14:46 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 19:15:36 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        std::string ideas[100];

        Brain();
	    ~Brain();
	    Brain(const Brain& brain);

	    Brain& operator= (const Brain& brain);
};

#endif