/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:31:39 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/04 00:51:50 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>


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

		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "longest span : " << sp.longestSpan() << std::endl;
	}
	
	{
		std::cout << "============= 10000 test ==============" << std::endl;
		srand(time(NULL));
		std::vector<int> tmp(10000);
		std::generate(tmp.begin(), tmp.end(), rand);
		Span sp(10000);
        try {
			sp.addNumber(tmp.begin(), tmp.end());
			std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
			std::cout << "longest span : " << sp.longestSpan() << std::endl;
			
			std::cout << std::endl << "Success!!!" << std::endl;
		} catch(const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	return (0);
}
