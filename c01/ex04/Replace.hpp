/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:31:38 by junykim           #+#    #+#             */
/*   Updated: 2023/03/04 15:22:31 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace
{
	private:
		std::string file_name;
		std::string to_find;
		std::string replaced;
	public:
		Replace();
		~Replace();
		Replace(char **argv);

		int checkInfileError(std::ifstream& _infile);
		int checkOutfileError(std::ofstream& _replaced);
		void changeReplaceStr(std::ifstream& _infile, std::ofstream& _replaced);

		void setFileName(std::string _file);
		std::string getFileName(void) const;
		void setToFind(std::string _file);
		std::string getToFind(void) const;
		void setReplaced(std::string _file);
		std::string getReplaced(void) const;
};

#endif