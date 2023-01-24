/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:30:56 by junykim           #+#    #+#             */
/*   Updated: 2023/01/18 12:35:12 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	private:
		std::string f_name;
		std::string l_name;
		std::string n_name;
		std::string p_number;
		std::string secret;
	public:
		void	AddContact();
};

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
	public:
		void	AddContact();
};

