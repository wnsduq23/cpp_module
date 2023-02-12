/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:33:21 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 16:31:13 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : name(name), is_signed(0), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if (this->getGradeToSign() < 1 || getGradeToExecute() < 1)
		throw GradeTooHighException();
	else if (this->getGradeToSign() > 150 || getGradeToExecute() > 150)
		throw GradeTooLowException();
    // Sign과 Exec 숫자를 서로 비교할 필요는 없나 ?
   // if (getGradeToSign() > getGradeToExecute())
   // {
   //     throw Form::GradeTooHighException();
   // }
}

bool Form::beSigned(const Bureaucrat &rhs)
{
	if (rhs.Bureaucrat::getGrade() <= this->Form::getGradeToSign())
	{
		this->is_signed = true;
		return (true);
	}
	else
	{
		throw GradeTooLowException();
	}
	return (false);
}

const std::string Form::getName() const
{
	return (this->name);
}

bool Form::isSigned() const
{
	return (this->is_signed);
}

int Form::getGradeToSign() const
{
	return (this->grade_to_sign);
}

int Form::getGradeToExecute() const
{
	return (this->grade_to_execute);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high for the form!");
};

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low for the form!");
}

std::ostream& operator<<(std::ostream& out, const Form& f)
{
    out << f.getName() << std::boolalpha << ", signed : " << f.isSigned()
    << ", gradeToSign : " << f.getGradeToSign()
    << ", gradeToExecute : " << f.getGradeToExecute();
    return (out);
}