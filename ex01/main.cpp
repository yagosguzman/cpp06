/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 19:30:17 by ysanchez          #+#    #+#             */
/*   Updated: 2024/11/21 22:07:19 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"

static void init_data(struct Data* d)
{
	d->c = 'Z';
	d->i = 1989;
	d->d = 23.14;
	d->str = "\"Placeholder str\"";
}

int main(void)
{
	Data* test = new Data;
	init_data(test);

	std::cout << "The data content is:" << std::endl;
	std::cout << "Test->char: " << test->c << std::endl;
	std::cout << "Test->int: " << test->i << std::endl;
	std::cout << "Test->double: " << test->d << std::endl;
	std::cout << "Test->string: " << test->str << std::endl;

	uintptr_t test_ptr = Serializer::serialize(test);

	std::cout << "\nThe pointer using serialize is: 0x" << std::hex << test_ptr << std::endl;

	Data* copy = Serializer::deserialize(test_ptr);

	std::cout << "\nThe copy content using deserialize is:" << std::endl;
	std::cout << "Copy->char: " << copy->c << std::endl;
	std::cout << "Copy->int: " << std::dec << copy->i << std::endl;
	std::cout << "Copy->double: " << copy->d << std::endl;
	std::cout << "Copy->string: " << copy->str << std::endl;

	delete test;
	return 0;
}