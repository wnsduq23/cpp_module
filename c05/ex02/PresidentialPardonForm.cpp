/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:01:50 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 17:16:48 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old) : AForm(old) {
	this->target = old.target;
}

const PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	if (this == &rhs)
		return (*this);
	AForm::operator=(rhs);
	this->target = rhs.target;
	return (*this);
}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{

}