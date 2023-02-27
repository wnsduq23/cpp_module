/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:11:01 by junykim           #+#    #+#             */
/*   Updated: 2023/02/27 15:31:11 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Arguments Fail\n";
		return (1);
	}
	Replace file(argv);
	std::ifstream infile(argv[1]);
	std::ofstream replaceFile(file.getFileName().data(), std::ios::in | std::ios::trunc);

	file.checkError(infile, replaceFile);
	file.changeReplaceStr(infile, replaceFile);

	infile.close();
	replaceFile.close();
	return (0);
}