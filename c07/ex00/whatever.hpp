/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:46:17 by junykim           #+#    #+#             */
/*   Updated: 2023/02/11 12:49:01 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T &a, T &b)
{
    if (a < b)
    return (a);
    else   
    return (b);
}

template <typename T>
T max(T &a, T &b)
{
    if (a > b)
    return (a);
    else
    return (b);
}
#endif