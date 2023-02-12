/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:15:24 by junykim           #+#    #+#             */
/*   Updated: 2023/02/12 14:21:21 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    int value;
};

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
    Data data{42};
    uintptr_t serialized = serialize(&data);
    Data* deserialized = deserialize(serialized);

    if (deserialized == &data)
    {
        std::cout << "Success: deserialized pointer matches original pointer." << '\n';
    }
    else
    {
        std::cout << "Error : deserialized pointer doesn't match original pointer." << '\n';
    }
    return (0);
}