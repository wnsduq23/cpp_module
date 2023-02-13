/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:50:31 by junykim           #+#    #+#             */
/*   Updated: 2023/02/13 14:21:11 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
    public :  
        Dog();
        ~Dog();
        Dog(const Dog& _rhs);
        Dog &operator=(const Dog& _rhs);
        void makeSound() const;
        void setIdea(std::string think, int idx);
        std::string getIdea(int idx) const;
};
#endif