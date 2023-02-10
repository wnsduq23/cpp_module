/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:49:43 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 19:01:24 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public :  
        Cat();
        ~Cat();
        Cat(const Cat& _rhs);
        Cat &operator=(const Cat& _rhs);
        void makeSound() const;
};
#endif