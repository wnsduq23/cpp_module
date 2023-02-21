/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:45:05 by junykim           #+#    #+#             */
/*   Updated: 2023/02/21 17:28:26 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap& _rhs);
		FragTrap(std::string _name);
		~FragTrap();

		FragTrap &operator=(const FragTrap& rhs);

		void attack(std::string const& _target);
		void highFiveGuys(void);
};
#endif