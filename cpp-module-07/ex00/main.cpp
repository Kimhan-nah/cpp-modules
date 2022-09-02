/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 03:32:55 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 03:46:04 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main()
{
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;		// ::  -> 전역함수......................!!
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}

	{
		int a = 10;
		int b = 30;

		swap(a, b);
		std::cout << a << " " << b << std::endl;
	}

	{
		char a = 'a';
		char b = 'b';

		swap(a, b);
		std::cout << a << " " << b << std::endl;
	}

	{
		int a = 10;
		int b = 20;

		std::cout << min(a, b) << std::endl;
		std::cout << max(a, b) << std::endl;
	}

	{
		char a = 'a';
		char b = 'b';

		std::cout << min(a, b) << std::endl;
		std::cout << max(a, b) << std::endl;
	}
	{
		std::string a = "abcde";
		std::string b = "bbcde";
		
		std::cout << min(a, b) << std::endl;
		std::cout << max(a, b) << std::endl;
	}
	return 0;
}