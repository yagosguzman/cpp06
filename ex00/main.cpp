/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 20:04:51 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/06 19:07:16 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Checkers.hpp"
#include "ScalarConverter.hpp"

// int main (int argc, char** argv)
// {
// 	if (argc != 2)
// 	{
// 		std::cout << "INSTRUCTIONS: \"./exec\" + \"value\"" << std::endl;
// 		return 1;
// 	}
	
// }

int main(int argc, char** argv) {
    // Pruebas de entrada
	
	if (argc == 2)
	{
        std::cout << "Testing \"" << argv[1] << "\": " << std::endl;
		if (checker_number(argv[1]))
			std::cout << "Valid number" << std::endl;
		else
			std::cout << "Invalid number" << std::endl;
    }

    return 0;
}