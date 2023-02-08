/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:37:06 by junykim           #+#    #+#             */
/*   Updated: 2023/02/08 14:37:07 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "&string address:    " << &str << '\n';
    std::cout << "stringPTR address:  " << stringPTR << '\n';
    std::cout << "&stringREF address: " << &stringREF << '\n';
    
    std::cout << "string:       " << str << '\n';
    std::cout << "*stringPTR:   " << *stringPTR << '\n';
    std::cout << "stringREF:    " << stringREF << '\n';
}