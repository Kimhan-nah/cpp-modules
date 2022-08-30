/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:03:14 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 00:33:26 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	type_ = "Animal";
	std::cout << "[Animal] Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) {
	*this = copy;
	std::cout << "[Animal] Copy Constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "[Animal] Destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &ref) {
	type_ = ref.type_;
	std::cout << "[Animal] Copy Assignement Operator called" << std::endl;

	return (*this);
}

std::string Animal::getType() const {
	return (type_);
}
