/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:31:18 by junykim           #+#    #+#             */
/*   Updated: 2023/02/27 15:35:44 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>

Replace::Replace()
{
	std::string file_name = NULL;
	std::string to_find = NULL;
	std::string replaced = NULL;
	std::cout << "Replace default Constructor\n";
}

Replace::~Replace()
{
	std::cout << "Replace class is Destroyed\n";
}

Replace::Replace(char **argv)
{
	this->setFileName(argv[1]);
	this->setToFind(argv[2]);
	this->setReplaced(argv[3]);
}

std::string Replace::getFileName() const
{
	return (this->file_name);
}

void Replace::setFileName(std::string _file)
{
	this->file_name = _file;
	this->file_name += ".replace";
}

std::string Replace::getToFind() const
{
	return (this->to_find);
}

void Replace::setToFind(std::string _tofind)
{
	this->to_find = _tofind;
}

std::string Replace::getReplaced() const
{
	return (this->replaced);
}

void Replace::setReplaced(std::string _replaced)
{
	this->replaced = _replaced;
}

int Replace::checkError(std::ifstream& infile, std::ofstream& _replaced)
{
	if (getToFind().empty() || getToFind() == "")
	{
		std::cout << "Invaild Argument\n";
		return (1);
	}
	if (!infile.is_open())
	{
		std::cout << "Cannot open file \n";
		return (1);
	}
	if (!_replaced.is_open())
	{
		infile.close();
		std::cout << "replaceFile open fail\n";
		return (1);
	}
	return (0);
}

void Replace::changeReplaceStr(std::ifstream& infile, std::ofstream& replaceFile)
{
	std::string line;
	int i;
	while (std::getline(infile, line))
	{
		while (line.find(this->getToFind(), 0) < line.length())
		{
			i = line.find(this->getToFind());
			line.insert(i, this->getReplaced());
			line.erase(i + this->getReplaced().length(), this->getToFind().length());
		}
		replaceFile << line << '\n';
	}
}