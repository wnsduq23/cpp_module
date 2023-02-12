/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:05:23 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 17:17:35 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old) : AForm(old) {
	this->target = old.target;
}

const RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	if (this == &rhs)
		return (*this);
	AForm::operator=(rhs);
	this->target = rhs.target;
	return (*this);
}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{

}
	