/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 10:55:39 by junykim           #+#    #+#             */
/*   Updated: 2023/02/11 12:25:03 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat first("KIM");
	Bureaucrat second("LEE");

	std::cout << "=== Wrong Bureaucrat ===" << std::endl;

	try
	{
		first.setGrade(0);
		std::cout << first << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		second.setGrade(151);
		std::cout << second << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== Good Bureaucrat ===" << std::endl;

	try
	{
		first.setGrade(2);
		std::cout << first << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		second.setGrade(149);
		std::cout << second << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "\n=== Test Member ===" << std::endl;
	try
	{
		first.increment();
		std::cout << first << std::endl;
		// first.increment();
		// std::cout << first << std::endl;
		// second.decrement();
		// std::cout << second << std::endl;
		// second.decrement();
		// std::cout << second << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}