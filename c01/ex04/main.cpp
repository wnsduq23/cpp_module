/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:11:01 by junykim           #+#    #+#             */
/*   Updated: 2023/02/09 17:54:22 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Arguments Fail\n";
		return 1;
	}

	std::ifstream infile(argv[1]);
	std::string outfile(argv[1]);
	outfile += ".replace";
	std::ofstream replaceFile(outfile.data(), std::ios::in | std::ios::trunc);

	std::string search(argv[2]);
	std::string replaceStr(argv[3]);
	std::string line;

	if (search.empty() || search == "")
	{
		std::cout << "Invaild Argument\n";
		return 1;
	}
	if (!infile.is_open())
	{
		std::cout << "Cannot open file " << argv[1] << '\n';
		return 1;
	}
	if (!replaceFile.is_open())
	{
		infile.close();
		std::cout << "replaceFile open fail\n";
		return 1;
	}
	int i;
	while (std::getline(infile, line))
	{
		while (line.find(search, 0) < line.length())
		{
			i = line.find(search);
			line.insert(i, replaceStr);
			line.erase(i + replaceStr.length(), search.length());
		}
		replaceFile << line << '\n';
	}
	infile.close();
	replaceFile.close();
	return 0;
}