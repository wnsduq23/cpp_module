/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:53:20 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 15:24:46 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat // 얘를 exception class라고 부르는 건가 ? 
{
    private:
	int					grade;
    const std::string	name;

	public :
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);

	const std::string getName(void) const;

	int			getGrade(void) const;
	void		setGrade(int grade);
	void		incrementGrade();
	void		decrementGrade();

	class GradeTooHighException : public std::exception {
		public:
			const char* what(void) const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			const char* what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &source);
#endif