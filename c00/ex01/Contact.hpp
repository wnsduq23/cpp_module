/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:50:11 by junykim           #+#    #+#             */
/*   Updated: 2023/02/08 13:48:22 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string p_number;
		std::string secret;
	public:
          std::string getFirstName() const;
          std::string getLastName() const;
          std::string getNickName() const;
          std::string getPhoneNumber() const;
          std::string getDarkestSecret() const;

          void setFirstName(std::string firstName);
          void setLastName(std::string lasttName);
          void setNickName(std::string nickName);
          void setPhoneNumber(std::string phoneNumber);
          void setDarkestSecret(std::string darkestSecret);
};

#endif