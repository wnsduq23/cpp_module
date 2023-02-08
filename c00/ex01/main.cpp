/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:02:44 by junykim           #+#    #+#             */
/*   Updated: 2023/02/08 13:55:27 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void) {
  PhoneBook 	phoneBook;
  std::string	cmd; // 이거 기본적으로 초기화 됨 ?
  std::string	search_index;
  bool			flag;

  while (true) 
  { 
	flag = true;
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
		for (unsigned long i = 0; i < search_index.length(); i++)
		{
			if (isdigit(search_index[i]) == 0)
			{
				std::cout << "Wrong Index\n";
				flag = false;
				break;
			}
		}
		if (flag)
		{
			if (stoi(search_index) > 0 && stoi(search_index) <= phoneBook.getIndex())
				phoneBook.searchResult(stoi(search_index));
			else{
				std::cout << "Wrong Index\n";
				break ;
			}
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