/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:32:29 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 16:18:43 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
    private:
    std::string name;
    bool is_signed;
    const int grade_to_sign;
    const int grade_to_execute;

    public:
    Form(std::string name, int grade_to_sign, int grade_to_execute);

    const std::string getName() const;
    bool        isSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    bool beSigned(const Bureaucrat &rhs);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    std::ostream &operator<<(std::ostream &out, const Form &f);
};
#endif