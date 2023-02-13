/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 18:48:44 by junykim           #+#    #+#             */
/*   Updated: 2023/02/10 19:07:46 by junykim          ###   ########.fr       */
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
  virtual ~Animal();// 소멸자에도 virtual 넣어야하나요 ?

  virtual void makeSound() const;
  std::string getType() const;
};

#endif