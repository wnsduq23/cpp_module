/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 12:51:19 by junykim           #+#    #+#             */
/*   Updated: 2023/02/11 12:52:58 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void iter(T *array, size_t length, void (*fn)(T&))
{
    for (size_t i = 0; i < length; i++)
    {
        fn(array[i]);
    }
}   

template<typename T>
void print(T &str)
{
    std::cout << str << " ";
}

template<typename T>
void sqrt(T &num)
{
    num = num * num;
}