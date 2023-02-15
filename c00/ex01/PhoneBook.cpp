/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:36:56 by junykim           #+#    #+#             */
/*   Updated: 2023/02/15 15:12:26 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
PhoneBook::PhoneBook()
{
	index = 0;
}

int PhoneBook::getIndex(void) const
{
	return (this->index);
}

void PhoneBook::setIndex(int Index)
{
	this->index = Index;
}

void	printTable(std::string str)
{
	int len;
	
    len = str.size();
    if (len <= 10)
    {
        std::cout << std::setw(10);
        std::cout << str;
        std::cout << '|';
    }
    else
    {
        std::cout << std::setw(9);
        std::cout << str.substr(0, 9);
        std::cout << '.';
        std::cout << '|';
    }
}

void    setContact(std::string &_name)
{
    while (getline(std::cin, _name))
    {
        if (!_name.empty() && !std::cin.eof())
        {
            return ;
        }
    }
    std::cout << "EOF\n";
    exit(0);
}

void PhoneBook::addTable(void)
{
    Contact     temp;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cin.ignore();
    std::cout << "Input First Name : ";
    setContact(firstName);
    temp.setFirstName(firstName);
    std::cout << "Input Last Name : ";
    setContact(lastName);
    temp.setLastName(lastName);
    std::cout << "Input NickName : ";
    setContact(nickName);
    temp.setNickName(nickName);
    std::cout << "Input phoneNumber Name : ";
    setContact(phoneNumber);
    temp.setPhoneNumber(phoneNumber);
    std::cout << "Input Secret : ";
    setContact(darkestSecret);
    temp.setDarkestSecret(darkestSecret);
    
    this->contacts[getIndex() % MAX_IDX] = temp;
	setIndex(getIndex() + 1);
}

void PhoneBook::showAllTable()
{
	int idx;

    printTable("Index");
    printTable("First Name");
    printTable("Last Name");
    printTable("NickName");
    std::cout << '\n';
	idx = getIndex();
    if (getIndex() > MAX_IDX)
        idx = MAX_IDX;
    for (int i = 0; i < idx; i++)
    {
        printTable(std::to_string(i + 1));
        printTable(this->contacts[i].getLastName());
        printTable(this->contacts[i].getNickName());
        printTable(this->contacts[i].getPhoneNumber());
        std::cout << '\n';
    }
}

void PhoneBook::searchResult(int index)
{
    printTable(this->contacts[index - 1].getFirstName());
    printTable(this->contacts[index - 1].getLastName());
    printTable(this->contacts[index - 1].getNickName());
    printTable(this->contacts[index - 1].getPhoneNumber());
    printTable(this->contacts[index - 1].getDarkestSecret());
}