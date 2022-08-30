/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:02:11 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 00:37:04 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"

int main()
{
	Dog		dog;
	Cat		cat;
	// Animal animal; <- 인스턴스 만들 수 없음

	std::cout << std::endl;
	std::cout << "========= Abstract Class ==========" << std::endl;
	cat.makeSound();
	dog.makeSound();
	std::cout << std::endl;

	return (0);
}
