/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:03:08 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 00:02:00 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include <iostream>

Cat::Cat() : Animal()
{
	type_ = "Cat";
	brain_ = new Brain();
	std::cout << "[Cat] Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : brain_(NULL)
{
	*this = copy;
	std::cout << "[Cat] Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain_;
	std::cout << "[Cat] Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &ref)
{
	type_ = ref.type_;
	if (brain_)
		delete brain_;
	brain_ = new Brain(*ref.brain_);
	
	std::cout << "[Cat] Copy Assignment Opeartor called" << std::endl;
	
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow... Meow... 야옹... 야옹..." << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (brain_);
}
