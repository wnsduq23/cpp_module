/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:30:56 by junykim           #+#    #+#             */
/*   Updated: 2023/02/15 15:12:04 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#define MAX_IDX (8)

class PhoneBook {
private:
  Contact contacts[MAX_IDX];
  int index;

public:
  PhoneBook();

  void	addTable(void);
  void	showAllTable(void);
  void	searchResult(int index);

  void	setIndex(int index);
  int	getIndex(void) const;
};

#endif