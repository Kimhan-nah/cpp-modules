/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:07:18 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/30 15:41:33 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	type_ = "WrongAnimal";
	std::cout << "[WrongAnimal] Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "[WrongAnimal] Copy Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ref)
{
	type_= ref.type_;
	std::cout << "[WrongAnimal] Copy Assignment Operator called" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (type_);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "...(Wrong Animal Sound)..." << std::endl;
}