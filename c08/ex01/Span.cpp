/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:35:51 by junykim           #+#    #+#             */
/*   Updated: 2023/02/13 15:29:06 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	std::cout << "Span default Constructor\n";
}

Span::Span(unsigned int _N) : N(_N) {}

Span::~Span()
{
	std::cout << "Span is destroyed\n";
}

std::size_t Span::shortestSpan(void) const
{

}

std::size_t Span::longestSpan(void) const
{

}

void addNumber(int x)
{
	
}