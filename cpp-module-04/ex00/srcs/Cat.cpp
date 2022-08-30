/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:03:08 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 00:27:37 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	type_ = "Cat";
	std::cout << "[Cat] Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	*this = copy;
	std::cout << "[Cat] Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &ref)
{
	type_ = ref.type_;
	std::cout << "[Cat] Copy Assignment Opeartor called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow... Meow... 야옹... 야옹..." << std::endl;
}