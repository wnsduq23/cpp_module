/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:06:44 by junykim           #+#    #+#             */
/*   Updated: 2023/02/20 21:15:28 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
    std::string name;
    Weapon &weapon;
    public:
    HumanA(std::string _name, Weapon &_weapon);
    ~HumanA();
    void attack();
};
#endif