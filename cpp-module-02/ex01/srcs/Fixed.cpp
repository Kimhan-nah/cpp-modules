/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:46:01 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 11:11:04 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "../includes/Fixed.hpp"

const int Fixed::_frac_bit = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_raw = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	_raw = num << _frac_bit;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
    this->_raw = static_cast<int>(roundf(num * (1 << _frac_bit)));
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->_raw);
}

void Fixed::setRawBits(int const raw)
{
	_raw = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(_raw) / (1 << _frac_bit));
}

int Fixed::toInt(void) const
{
	return (_raw >> _frac_bit);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}