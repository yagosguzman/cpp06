/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Checkers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:00:20 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/05 21:00:35 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Checkers.hpp"

bool	checker_char(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]) && isprint(str[0]))
	{
		std::cout << "char literal found" << std::endl;
			return true;
	}
	return false;
}

void	to_char(std::string str)
{
	char c;

	c = str.at(0);
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

bool	checker_int(std::string str)
{
	size_t i = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return false;
		i++;
	}
	std::cout << "int literal found" << std::endl;
	return true;
}

bool	checker_double(std::string str);
bool	checker_float(std::string str);
bool	checker_specials(std::string str)
{
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf")
		|| !str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return true;
	return false;
}