/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:01:34 by junykim           #+#    #+#             */
/*   Updated: 2023/02/13 16:48:23 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert
{
    private:
    std::string value;
	int			_valueBits;
	double	val_double;
	int		val_int;
	char	val_char;
	float	val_float;

    public:
	Convert();
	~Convert();
	Convert(const Convert& _rhs);
	Convert& operator=(const Convert& convert);

    void    setValue(std::string s);
};

#endif