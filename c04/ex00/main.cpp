/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:55:49 by junykim           #+#    #+#             */
/*   Updated: 2023/02/25 20:09:12 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

	std::cout << "\n==============================\n";

    const WrongAnimal *wa = new WrongAnimal();
    const WrongAnimal *wc = new WrongCat();

    std::cout << wa->getType() << " " << std::endl;
    std::cout << wc->getType() << " " << std::endl;
    wa->makeSound();
    wc->makeSound();

	std::cout << "\n==============================\n";

    delete wa;
    delete wc;
    delete meta;
    delete i;
    delete j;
    return 0;
}