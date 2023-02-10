/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:51:54 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 19:15:51 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :  
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& _rhs);
        WrongCat &operator=(const WrongCat& _rhs);
        void makeSound() const;
};

#endif