/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:55:29 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 15:16:1 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    setGrade(grade);
}

int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

const std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

void Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade;
}

void Bureaucrat::incrementGrade()
{
    setGrade(getGrade() - 1);
}

void	Bureaucrat::decrementGrade()
{
    setGrade(getGrade() + 1);
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade too high...";
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade too low...";
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &source)
{
    out << source.getName() << ", bureaucrat grade " << source.getGrade();
    return (out);
}
