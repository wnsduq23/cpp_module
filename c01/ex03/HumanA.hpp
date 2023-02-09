/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:06:44 by junykim           #+#    #+#             */
/*   Updated: 2023/02/09 17:35:04 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
    Weapon &weapon;// 이러면 무조건  initialize list로 초기화해줘야하는거 아님?
    std::string name;
    public:
    HumanA(std::string _name, Weapon &_weapon);
    ~HumanA();
    void attack();
};
#endif