/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:02:14 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 14:09:44 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{

}

void    Convert::setValue(std::string s)
{
    std::string::size_type n;
    std::string::size_type f;

    try
    {
        this->value = s;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    n = s.find(.);
}