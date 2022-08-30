/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:02:16 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/30 17:36:54 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal() {
	type_ = "Dog";
	brain_ = new Brain();
	std::cout << "[Dog] Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal() {
	*this = copy;
	std::cout << "[Dog] Copy Constructor called" << std::endl;
}

Dog::~Dog() {
	delete brain_;
	std::cout << "[Dog] Destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &ref) {
	type_ = ref.type_;
	delete brain_;
	brain_ = new Brain(*ref.brain_);
	std::cout << "[Dog] Copy Assignement Operator called" << std::endl;

	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Woof! Woof! 멍멍! 멍멍!" << std::endl;
}
