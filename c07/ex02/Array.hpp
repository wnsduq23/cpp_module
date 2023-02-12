/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:33:51 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 13:40:45 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    private:
    std::size_t len;
    T           *array;

    public:
    Array();
    Array(std::size_t n);
    Array& operator=(const Array& obj);
    ~Array();

    std::size_t size() const;
    T& operator[] (std::size_t i);
    const T& operator[] (std::size_t i) const;
};
#include "Array.tpp"
#endif