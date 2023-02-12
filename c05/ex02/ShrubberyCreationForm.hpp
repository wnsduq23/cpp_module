/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:06:08 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 17:11:51 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERyCREATIONFORM_HPP
#define SHRUBBERyCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
		
	public:
		bool execute(Bureaucrat const & executor) const;
		const ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
		ShrubberyCreationForm(const ShrubberyCreationForm &old);
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
};

#endif