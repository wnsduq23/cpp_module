/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:32:39 by junykim           #+#    #+#             */
/*   Updated: 2023/02/15 12:15:57 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::setFirstName(std::string firstName)
{
    this->f_name = firstName;
}

void    Contact::setLastName(std::string lastName)
{
    this->l_name = lastName;
}

void    Contact::setNickName(std::string nickname)
{
    this->n_name = nickname;
}

void    Contact::setPhoneNumber(std::string phoneNumber)
{
    this->p_number = phoneNumber;
}

void    Contact::setDarkestSecret(std::string darkestSecret)
{
    this->secret = darkestSecret;
}

std::string Contact::getFirstName(void) const
{
    return (this->f_name);
}

std::string Contact::getLastName(void) const
{
    return (this->l_name);
}

std::string Contact::getNickName(void) const
{
    return (this->n_name);
}

std::string Contact::getPhoneNumber(void) const
{
    return (this->p_number);
}
std::string Contact::getDarkestSecret(void) const
{
    return (this->secret);
}