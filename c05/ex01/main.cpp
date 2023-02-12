/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:27:40 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 16:28:09 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat first("KIM",true, 30, 40);
	Bureaucrat second("LEE", false, 20, 10);
	
	first.setGrade(3);
	second.setGrade(150);

	std::cout << first << std::endl;
	std::cout << second << std::endl;

	std::cout << "\n=== Wrong Form ===" << std::endl;

	try {
		Form third("Kim's Form", 0, 1);
		std::cout << third << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Form fourth("Lee's Form", 151, 150);
		std::cout << fourth << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== Good Forms ===" << std::endl;

	try {
		Form third("KIM's form", 2, 1);
		std::cout << third << std::endl;
		std::cout << third.getSign() << std::endl;

		Form fourth("LEE's form", 149, 150);
		std::cout << fourth << std::endl;
		std::cout << fourth.getSign() << std::endl;

		std::cout << "\n=== Can't sign ===" << std::endl;

		try {
			first.signForm(third);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		try {
			second.signForm(fourth);
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << "\n=== Increase ===" << std::endl;

		try {
			first.increment();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		try {
			second.increment();
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << first << std::endl;
		std::cout << second << std::endl;

		std::cout << "\n=== Sign ===" << std::endl;

		try {
			first.signForm(third);
			std::cout << third.getSign() << std::endl;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		try {
			second.signForm(fourth);
			std::cout << fourth.getSign() << std::endl;
			
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}	

	return (0);
}