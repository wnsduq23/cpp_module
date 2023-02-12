/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:25:48 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 14:38:02 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Base {
 public:
  virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate() {
  int choice = std::rand() % 3;
  if (choice == 0) {
    return new A();
  } else if (choice == 1) {
    return new B();
  } else {
    return new C();
  }
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "pointer is A\n";
	if (dynamic_cast<B*>(p))
		std::cout << "pointer is B\n";
	if (dynamic_cast<C*>(p))
		std::cout << "pointer is C\n";
}

void identify(Base& p)
{
	try 
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "reference is A\n";
		static_cast<void>(a);
	}
  	catch (std::exception&) {}
	try 
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "reference is B\n";
		static_cast<void>(b);
	}
  	catch (std::exception&) {}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "reference is C\n";
		static_cast<void>(c);
	}
  	catch (std::exception&) {}
}

int main(void)
{
    Base*   base = generate();
    
    identify(base);
    delete base;
    return (0);
}