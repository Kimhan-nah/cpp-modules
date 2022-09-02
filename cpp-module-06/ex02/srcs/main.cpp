/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 23:13:23 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 00:30:21 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


static Base	*generate(void)
{
	srand(time(NULL));
	int rand_num = rand() % 3;
	switch (rand_num) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return (NULL);
}

static void identify (Base *p)
{
	if (dynamic_cast<A *>(p)) {
		std::cout << "A" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(p)) {
		std::cout << "B" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(p)) {
		std::cout << "C" << std::endl;
		return ;
	}
}

static void identify(Base &p)
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	} catch (const std::exception &e) {
	}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	} catch (const std::exception &e) {
	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	} catch (const std::exception &e) {
	}
}

int	main()
{
	Base	*base = generate();

	std::cout << "(Base *p)->type : ";
	identify(base);
	std::cout << "(Base &p)->type : ";
	identify(*base);

	delete base;

	return (0);
}