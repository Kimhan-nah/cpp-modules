/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 04:01:49 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 11:32:54 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main()
{
	Array<int> numbers(MAX_VAL);
	int	*mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;		// operator=
		mirror[i] = value;
	}
	// SCOPE
	{
		Array<int> tmp = numbers;	// operator=
		Array<int> test(tmp);		// copy constructor

		for (int i = 0; i < 10; i++) {
			std::cout << numbers[i] << std::endl;
			std::cout << tmp[i] << std::endl;
			std::cout << test[i] << std::endl;
			std::cout << "----------" << std::endl;
		}
	}
	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try {
		numbers[-2] = 0;		// out of range
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		numbers[MAX_VAL] = 0;		// out of range
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < MAX_VAL; i++) {
		numbers[i] = rand();
	}

	delete[] mirror;

	return 0;
}