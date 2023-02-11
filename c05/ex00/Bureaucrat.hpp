/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:53:20 by junykim           #+#    #+#             */
/*   Updated: 2023/02/11 13:14:03 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
	int					grade;
    const std::string	name;

	public :
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(const Bureaucrat &rhs);
	const Bureaucrat& operator=(const Bureaucrat &rhs);

	int			getGrade(void) const;
	void		setGrade(int grade);
	const std::string getName(void) const;

	void		increment();
	void		decrement();
	class GradeTooHighException : public std::exception {};
	class GradeTooLowException : public std::exception {};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &source);
#endif