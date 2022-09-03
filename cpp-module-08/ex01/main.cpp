/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:31:39 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 21:19:36 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>


int main()
{
	{
		std::cout << "============= subject test ==============" << std::endl;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	// 추가하기...
	// {
	// 	std::cout << "============= 10000 test ==============" << std::endl;
	// 	srand(time(NULL));
	// 	try {
	// 		Span sp = Span(15000);
	// 		std::cout << sp.shortestSpan() << std::endl;
	// 		std::cout << sp.longestSpan() << std::endl;
	// 	} catch(const std::exception &e) {
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }

	return (0);
}
