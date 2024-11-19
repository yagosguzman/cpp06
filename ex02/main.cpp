/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:55:15 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/19 21:08:32 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	Base tester;
	Base* unkown_id;

	std::cout << "TEST 1:" << std::endl;
	unkown_id = tester.generate();
	tester.identify(unkown_id);
	tester.identify(*unkown_id);
	delete unkown_id;

	std::cout << "\nTEST 2:" << std::endl;
	unkown_id = tester.generate();
	tester.identify(unkown_id);
	tester.identify(*unkown_id);
	delete unkown_id;

	std::cout << "\nTEST 3:" << std::endl;
	unkown_id = tester.generate();
	tester.identify(unkown_id);
	tester.identify(*unkown_id);
	delete unkown_id;

	std::cout << "\nTEST 4:" << std::endl;
	unkown_id = tester.generate();
	tester.identify(unkown_id);
	tester.identify(*unkown_id);
	delete unkown_id;

	std::cout << "\nTEST 5:" << std::endl;
	unkown_id = tester.generate();
	tester.identify(unkown_id);
	tester.identify(*unkown_id);
	delete unkown_id;

	std::cout << "\nTEST 6:" << std::endl;
	unkown_id = tester.generate();
	tester.identify(unkown_id);
	tester.identify(*unkown_id);
	delete unkown_id;
}