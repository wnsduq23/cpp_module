/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:48:44 by junykim           #+#    #+#             */
/*   Updated: 2023/02/25 21:00:13 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
protected:
  std::string type;

public:
  Animal();
  Animal(std::string _type);
  Animal(const Animal &_rhs);
  Animal &operator=(const Animal &_rhs);
  virtual ~Animal();

  virtual void makeSound() const = 0;
  std::string getType() const;
};

#endif