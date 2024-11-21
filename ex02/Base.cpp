/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:31:49 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/21 20:04:37 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>

Base::~Base()
{
	std::cout << "Base destructor called" << std::endl;
}

Base* Base::generate(void)
{
	// srand(time(0)); //If we want to have diferent result each time we execute but all 6 tests will be the same
	int i = rand() % 3;

	if (i == 0)
	{
		std::cout << "Generator result: A" << std::endl;
		return new A;
	}

	if (i == 1)
	{
		std::cout << "Generator result: B" << std::endl;
		return new B;
	}

	else
	{
		std::cout << "Generator result: C" << std::endl;
		return new C;
	}
}

void Base::identify(Base* p) // Here if it's not type A, B or C the pointer will be NULL and it won't enter the if
{
	A* a_id = dynamic_cast<A*>(p);
	B* b_id = dynamic_cast<B*>(p);
	C* c_id = dynamic_cast<C*>(p);

	if (a_id)
		std::cout << "By pointer: The object generated is type A" << std::endl;
	if (b_id)
		std::cout << "By pointer: The object generated is type B" << std::endl;
	if (c_id)
		std::cout << "By pointer: The object generated is type C" << std::endl;
}

void Base::identify(Base& p) // By ref we use exceptions and don't catch anything to not get any error messages during execution
{
	try
	{
		A a_id = dynamic_cast<A&>(p);
		std::cout << "By ref: The object generated is type A" << std::endl;
	}
	catch(const std::exception& e)
	{}
	
	try
	{
		B b_id = dynamic_cast<B&>(p);
		std::cout << "By ref: The object generated is type B" << std::endl;
	}
	catch(const std::exception& e)
	{}

	try
	{
		C c_id = dynamic_cast<C&>(p);
		std::cout << "By ref: The object generated is type C" << std::endl;
	}
	catch(const std::exception& e)
	{}
	
}