/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:07:22 by junykim           #+#    #+#             */
/*   Updated: 2023/02/09 17:34:37 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
    Weapon *weapon;
    std::string name;
    public:
    HumanB(std::string _name);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif