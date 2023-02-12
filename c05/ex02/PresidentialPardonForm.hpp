/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:10:25 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 17:12:17 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string target;

public:
	bool execute(Bureaucrat const &executor) const;
	const PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	PresidentialPardonForm(const PresidentialPardonForm &old);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
};
#endif