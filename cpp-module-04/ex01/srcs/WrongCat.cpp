/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:07:24 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/30 15:33:42 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal()
{
	type_ = "WrongCat";
	std::cout << "[WrongCat] Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	std::cout << "[WrongCat] Copy Constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &ref)
{
	type_= ref.type_;
	std::cout << "[WrongCat] Copy Assignment Operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "~?!@#$%^ Meow! &*()_ Meow! +=-.,<>[]{}" << std::endl;
}