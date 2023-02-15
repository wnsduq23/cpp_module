/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:02:44 by junykim           #+#    #+#             */
/*   Updated: 2023/02/15 14:11:13 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>

int main(void) {
  PhoneBook 	phoneBook;
  int			idx;
  std::string	cmd;
  std::string	search_index;

  while (true) 
  { 
	std::cout << "\n *** enter command : (ADD, SEARCH, EXIT)*** \n";
    std::cin >> cmd;
	if (cmd == "ADD")
	{
		phoneBook.addTable();
	}
	else if (cmd == "SEARCH")
	{
		phoneBook.showAllTable();
		std::cout << "Input index what you wanna see :";
		std::cin.ignore();
		std::getline(std::cin, search_index);
		std::stringstream ss(search_index);
		ss >> idx;
		if (0 < idx && idx <= phoneBook.getIndex())
		{
            phoneBook.searchResult(idx);
        }
		else
		{
            std::cout << "Wrong Index\n";
		}
	}
	else if (cmd == "EXIT")
	{
		break ;
	}
	else{
		std::cout << "Unavailable Command \n";
	}
  }
  return (0);
}