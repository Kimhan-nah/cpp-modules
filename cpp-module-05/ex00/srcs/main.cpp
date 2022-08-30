/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 04:31:22 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 07:45:01 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <iostream>

int main()
{
	try {			// exception -> throw -> catch (exception &e)
		Bureaucrat hannkim("hannkim", 150);

		std::cout << hannkim << std::endl;
		hannkim.decreaseGrade();
		std::cout << hannkim << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "==========================" << std::endl;
	try {
		Bureaucrat han("han", 1);

		std::cout << han << std::endl;
		han.increaseGrade();
		std::cout << han << std::endl;
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "==========================" << std::endl;
	try {
		Bureaucrat kim("kim", 5);

		std::cout << kim << std::endl;
		for(int i = 5; i >= 0; i--) {
			kim.increaseGrade();
			std::cout << kim << std::endl;
		}
	} catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}