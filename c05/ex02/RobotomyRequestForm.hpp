/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:02:18 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 17:04:32 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP 
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;

	public:
		bool execute(Bureaucrat const & executor) const;
		const RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
		RobotomyRequestForm(const RobotomyRequestForm &old);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
};

#endif