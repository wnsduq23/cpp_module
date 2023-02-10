/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:50:31 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 19:04:06 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public :  
        Dog();
        ~Dog();
        Dog(const Dog& _rhs);
        Dog &operator=(const Dog& _rhs);
        void makeSound() const;
};
#endif