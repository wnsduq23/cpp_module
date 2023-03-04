/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:11:01 by junykim           #+#    #+#             */
/*   Updated: 2023/03/04 15:26:33 by junykim          ###   ########.fr       */
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
	if (file.checkInfileError(infile))
	{
		infile.close();
		return (1);
	}
	std::ofstream replaceFile(file.getFileName().data(), std::ios::in | std::ios::trunc);
	if (file.checkOutfileError(replaceFile))
	{
		infile.close();
		replaceFile.close();
		return (1);
	}

	file.changeReplaceStr(infile, replaceFile);

	infile.close();
	replaceFile.close();
	return (0);
}