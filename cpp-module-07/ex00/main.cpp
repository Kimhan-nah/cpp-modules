/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 03:32:55 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 11:42:54 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main()
{
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