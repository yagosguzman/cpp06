/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:39:06 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/06 19:27:17 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "Checkers.hpp"

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	(void)copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src)
{
	(void)src;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{}

void ScalarConverter::convert(const std::string& str)
{
	if (checker_char(str))
		convert_char(str);
	else if (checker_number(str))
	{
		if (!str.find('.') && !str.find('f'))
			convert_int(str);
		else if (str.find('.') && !str.find('f'))
			convert_double(str);
		else
			convert_float(str);
	}
	else if (checker_specials(str))
		convert_specials(str);
	else
		std::cout << "Invalid input" << std::endl;
}