/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:34:33 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 21:10:17 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::cout << "========= Vector Test ===========" << std::endl;
	try {
		std::vector<int>	v;
		for (int i = 0; i < 10; i++) {
			v.push_back(i);
		}
		std::vector<int>::iterator iter;
		for (int i = 0; i < 10; i++) {
			iter = easyfind(v, i);
			std::cout << "success to find: " << *iter << std::endl;
		}
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "========= List Test ===========" << std::endl;
	try {
		std::list<char>	lst;
		for (int i = 'a'; i < 'h'; i++) {
			lst.push_back(i);
		}
		std::list<char>::iterator iter;
		for (int i = 'a'; i < 'h'; i++) {
			iter = easyfind(lst, i);
			std::cout << "success to find: " << *iter << std::endl;
		}

		// exception!
		iter = easyfind(lst, 'i');
		std::cout << "success to find: " << *iter << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}