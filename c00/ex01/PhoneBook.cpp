/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:36:56 by junykim           #+#    #+#             */
/*   Updated: 2023/01/18 12:34:43 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
/**
 * ADD : 새로운 연락처를 저장한다.
 * - 사용자가 이 명령어를 입력하면 한 번에 한 필드씩 입력하라는 메시지가 표시된다.
 * - ‘first name’, ‘last name’, ‘nickname’, ‘phone number’, ‘darkest secret’ 순서로 입력받으며, 빈 채로 저장할 수 없다.
 * SEARCH : 특정 연락처 표시
 * - 명령어를 입력받으면 저장된 연락처들을 ‘index’, ‘first name’, ‘last name’, ‘nickname’ 순으로 표시한다. 각 열의 너비는 10자이며 파이프 문자로 구분한다. 텍스트는 오른쪽 정렬되어있어야 하며, 텍스트가 열보다 길면 잘리고, 마지막 표시 가능한 문자는 '.'으로 대체된다.
 * - 위의 정보를 보여준 다음, 사용자에게 인덱스를 다시 입력받는다. 인덱스가 범위를 벗어나거나 잘못된 경우 관련된 동작을 적절하게 정의한다. 제대로 입력받은 경우 연락처 정보를 한 줄에 하나씩 표시한다.
 * EXIT : 프로그램이 종료되고 연락처가 소실됨.
 */

void	Contact::SearchContact()
{

	//10자 초과면 자름 -> 표시가능 문자 .로 대체
	//정보 출력 -> 인덱스 입력 받기i 
}
int	main(void)
{
	std::string	cmd;

	//전화번호부 비우기
	while (true)
	{
		std::cout << "enter command : (ADD, SEARCH, EXIT)" << std::endl;
		std::cin >> cmd;
		if (cmd == "ADD")
		{
			AddContact();
		}
		else if (cmd == "SEARCH")
		{
			
		}
		else if (cmd == "EXIT")
		{
			break ;
		}
		else
		{
			std::cout << "command not found" << std::endl;
		}
	}
	return (0);
}

void	Contact::AddContact(void)
{
	//아무 값이 안 들어오면 저장을 하지 않고 오류 출력 
	std::cout << "first name :" << std::endl;
	std::cin >> this->f_name;
	std::cout << "last name :" << std::endl;
	std::cin >> this->l_name;
	std::cout << "nickname :" << std::endl;
	std::cin >> this->n_name;
	std::cout << "phone number :" << std::endl;
	std::cin >> this->p_number;
	std::cout << "darkest secret :" << std::endl;
	std::cin >> this->secret;
	std::cout << "Save Contact." << std::endl;
}

void	PhoneBook::AddContact(void)
{
	this->contacts[index % 8].AddContact();
	this->index++;
}