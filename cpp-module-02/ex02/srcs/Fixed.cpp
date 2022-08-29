/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:46:01 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 11:34:46 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "../includes/Fixed.hpp"

Fixed::Fixed(void) : _raw(0) {}

Fixed::Fixed(const Fixed &copy) { *this = copy; }

Fixed &Fixed::operator=(const Fixed &fixed) {
	_raw = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

Fixed::Fixed(const int num) : _raw(num << _frac_bit) {}

Fixed::Fixed(const float num) : _raw(static_cast<int>(roundf(num * (1 << _frac_bit)))) {}

int Fixed::getRawBits(void) const { return (_raw); }

void Fixed::setRawBits(int const raw) { _raw = raw; }

float Fixed::toFloat(void) const { return (static_cast<float>(_raw) / (1 << _frac_bit)); }

int Fixed::toInt(void) const { return (this->_raw >> _frac_bit); }

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	Fixed	tmp(this->toFloat() + fixed.toFloat());
	return (tmp);
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	Fixed	tmp(this->toFloat() - fixed.toFloat());
	return (tmp);
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	Fixed	tmp(this->toFloat() * fixed.toFloat());
	return (tmp);
}

Fixed Fixed::operator/(const Fixed &fixed) const {
	if (fixed.getRawBits() == 0) {
		std::cout << "divide error" << std::endl;
		exit(EXIT_FAILURE);
	}
	Fixed	tmp(this->toFloat() / fixed.toFloat());
	return (tmp);
}

bool Fixed::operator>(const Fixed &fixed) const {
	return (this->_raw > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const {
	return (this->_raw < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const {
	return (this->_raw >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const {
	return (this->_raw <= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const {
	return (this->_raw == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const {
	return (this->_raw != fixed.getRawBits());
}

// ++pre
Fixed	&Fixed::operator++(void) {
	this->_raw += 1;
	return (*this);
}

// post++
const Fixed	Fixed::operator++(int) {

	const Fixed tmp(*this);
	this->operator++();
	return (tmp);
}

// --pre
Fixed	&Fixed::operator--(void) {
	this->_raw -= 1;
	return (*this);
}

//post--
const Fixed	Fixed::operator--(int) {
	const Fixed tmp(*this);
	this->operator--();
	return (tmp);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2) {
	return (f1 < f2 ? f1 : f2);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2) {
	return (f1 < f2 ? f1 : f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2) {
	return (f1 > f2 ? f1 : f2);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2) {
	return (f1 > f2 ? f1 : f2);
}
