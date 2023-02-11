/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 11:55:29 by junykim           #+#    #+#             */
/*   Updated: 2023/02/11 13:13:16 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name) : name(name) {}

Bureaucrat::~Bureaucrat(){}
Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
    *this = rhs;
}

const Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (this != &rhs)
    {
        this->setGrade(rhs.getGrade());
        (std::string) this->name = (std::string)rhs.getName(); // 왜 캐스팅 ?
    }
    return (*this);
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

void Bureaucrat::increment()
{
	if (this->getGrade() < 2)
		throw GradeTooHighException();
    this->grade--;
}

void	Bureaucrat::decrement()
{
	if (this->getGrade() > 149)
		throw GradeTooLowException();
    this->grade++;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &source)
{
    out << source.getName() << ", bureaucrat grade " << source.getGrade();
    return (out);
}
