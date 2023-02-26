/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:49:43 by junykim           #+#    #+#             */
/*   Updated: 2023/02/25 20:29:35 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private	:
		Brain *brain;
    public	:  
        Cat();
        ~Cat();
        Cat(const Cat& _rhs);
        Cat &operator=(const Cat& _rhs);
        void makeSound() const;

		void setIdea(std::string think, int idx);
		std::string getIdea(int idx) const;
};
#endif