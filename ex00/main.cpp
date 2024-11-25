/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:04:51 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/25 17:55:47 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Checkers.hpp"
#include "ScalarConverter.hpp"
#include <stdlib.h>

int main(void)
{
	std::cout << "SCALAR CONVERTER TESTER:" << std::endl;
	
	std::cout << "\nTESTING CHAR:" << std::endl;
	std::cout << "~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Testing: \'A\'" << std::endl;
	ScalarConverter::convert("A");
	std::cout << "\nTesting: \'*\'" << std::endl;
	ScalarConverter::convert("*");

	std::cout << "\nTESTING INT:" << std::endl;
	std::cout << "~~~~~~~~~~~~" << std::endl;
	std::cout << "Testing: \'13\'" << std::endl;
	ScalarConverter::convert("13");
	std::cout << "\nTesting: \'-128\'" << std::endl;
	ScalarConverter::convert("-128");

	std::cout << "\nTESTING DOUBLE:" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Testing: \'98725.40\'" << std::endl;
	ScalarConverter::convert("98725.40");
	std::cout << "\nTesting: \'-.72\'" << std::endl;
	ScalarConverter::convert("-.72");
	std::cout << "\nTesting: \'1515.75\'" << std::endl;
	ScalarConverter::convert("1515.75");

	std::cout << "\nTESTING FLOAT:" << std::endl;
	std::cout << "~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Testing: \'-5.23f\'" << std::endl;
	ScalarConverter::convert("-5.23f");
	std::cout << "\nTesting: \'+.01f\'" << std::endl;
	ScalarConverter::convert("+.01f");
	std::cout << "\nTesting: \'256f\'" << std::endl;
	ScalarConverter::convert("256f");

	std::cout << "\nTESTING SPECIALS:" << std::endl;
	std::cout << "~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "Testing: \'-inf\'" << std::endl;
	ScalarConverter::convert("-inf");
	std::cout << "\nTesting: \'+inff\'" << std::endl;
	ScalarConverter::convert("+inff");
	std::cout << "\nTesting: \'nan\'" << std::endl;
	ScalarConverter::convert("nan");
}




// int main (int argc, char** argv)
// {
// 	if (argc != 2)
// 	{
// 		std::cout << "INSTRUCTIONS: \"./exec\" + \"value\"" << std::endl;
// 		return 1;
// 	}
// 	else
// 	{
// 		std::cout << "Testing \"" << argv[1] << "\": " << std::endl;
// 		ScalarConverter::convert(argv[1]);
// 	}
// 	return 0;
	
// }
