/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Checkers.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:00:20 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/13 19:52:11 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Checkers.hpp"
#include <stdlib.h>

bool	checker_char(const std::string& str)
{
	if (str.length() == 1 && !isdigit(str.at(0)) && isprint(str.at(0)))
	{
		// std::cout << "char literal found" << std::endl;
			return true;
	}
	return false;
}

bool	checker_number(const std::string& str)
{
	size_t i = 0;
	bool dot = false;
	bool digit = false;

	if (str.at(i) == '+' || str.at(i) == '-')
		i++;
	while (i < str.length())
	{
		if (isdigit(str.at(i)))
			digit = true;
		else if (str.at(i) == '.' && dot == false)
			dot = true;
		else if (str.at(i) == 'f' && i == (str.length() -1) && digit == true)
			return true;
		else
			return false;
		i++;
	}
	return (digit);
}

bool	checker_specials(std::string str)
{
	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf")
		|| !str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
		return true;
	return false;
}

void	convert_char(const std::string& str)
{
	char c;

	c = str.at(0);

	std::cout << "It's a char!" << std::endl;
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	convert_int(const std::string& str)
{
	std::cout << "It's an int!" << std::endl;

	int result = atoi(str.c_str());
	if (result >= 0 && result <= 127)
	{
		if (isprint(result))
			std::cout << "char: " << result << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;	
	std::cout << "int: " << result << std::endl;
	std::cout << "float: " << static_cast<float>(result) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(result) << ".0" << std::endl;
}

void	convert_double(const std::string& str)
{
	std::cout << "It's a double!" << std::endl;

	double result = strtod(str.c_str(), NULL);
	if (result >= 0 && result <= 127)
	{
		if (isprint(result))
			std::cout << "char: " << result << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;	
	std::cout << "int: " << static_cast<int>(result) << std::endl;
	std::cout << "float: " << static_cast<float>(result) << "f" << std::endl;
	std::cout << "double: " << result << std::endl;
}
void	convert_float(const std::string& str)
{
	std::cout << "It's a float!" << std::endl;

	double result = strtod(str.c_str(), NULL);
	if (result >= 0 && result <= 127)
	{
		if (isprint(result))
			std::cout << "char: " << result << std::endl;
		else
			std::cout << "char: non displayable" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(result) << std::endl;
	std::cout << "float: " << result << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(result) << std::endl;
}
void	convert_specials(const std::string& str)
{
	std::cout << "TO DO" << std::endl;
	(void)str;
}