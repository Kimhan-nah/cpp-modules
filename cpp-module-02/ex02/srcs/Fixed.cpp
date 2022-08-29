/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:46:01 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 00:55:40 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

const int Fixed::_frac_bit = 8;

Fixed::Fixed(void) : _raw(0) {}

Fixed::Fixed(const Fixed &fixed) { *this = fixed; }

Fixed &Fixed::operator=(const Fixed &fixed) {
	_raw = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

// _raw = 정수 -> 고정소수점
Fixed::Fixed(const int num) : _raw(num << _frac_bit) {}

// _raw = 부동소수점 -> 고정소수점
Fixed::Fixed(const float num) : _raw(static_cast<int>(roundf(num * (1 << _frac_bit)))) {}

int Fixed::getRawBits(void) const { return (_raw); }

void Fixed::setRawBits(int const raw) { _raw = raw; }

// 고정소수점 -> 부동소수점
float Fixed::toFloat(void) const { return (static_cast<float>(_raw >> _frac_bit)); }

// 고정소수점 -> 정수
int Fixed::toInt(void) const { return (this->_raw >> _frac_bit); }

// << 연산자 오버로딩
std::ostream	&operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return (out);
}

Fixed Fixed::operator+(const Fixed &fixed) const {
	Fixed	tmp(this->toFloat() + fixed.toFloat());
	return (tmp);

	// Fixed tmp;

	// tmp.setRawBits(this->_raw + fixed.getRawBits());
	// return (tmp);
}

Fixed Fixed::operator-(const Fixed &fixed) const {
	Fixed	tmp(this->toFloat() - fixed.toFloat());
	return (tmp);
	// Fixed tmp;

	// tmp.setRawBits(this->_raw - fixed.getRawBits());
	// return (tmp);
}

Fixed Fixed::operator*(const Fixed &fixed) const {
	Fixed	tmp(this->toFloat() * fixed.toFloat());
	return (tmp);
	// Fixed tmp;

	// tmp.setRawBits(this->_raw * fixed.getRawBits());
	// return (tmp);

}

Fixed Fixed::operator/(const Fixed &fixed) const {
	if (fixed.getRawBits() == 0) {
		std::cout << "divide error" << std::endl;
		exit(EXIT_FAILURE);
	}
	Fixed	tmp(this->toFloat() / fixed.toFloat());
	return (tmp);

	// Fixed tmp;

	// tmp.setRawBits(this->_raw / fixed.getRawBits());
	// return (tmp);
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
Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	this->operator++();
	return (tmp);
}

// --pre
Fixed	&Fixed::operator--(void) {
	this->_raw -= 1;
	return (*this);
}

//post--
Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	this->operator--();
	return (tmp);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2) {
	return (f1 < f2 ? f1 : f2);
}

// 앞에 const 붙는 거랑, 함수 뒤에 const 붙는 거는 다른 거?
// 앞에 붙는 건 반환하는 객체가 const임??
// 뒤에 붙는 const 멤버함수는 그냥 명시하는 의미고?
const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2) {
	return (f1 < f2 ? f1 : f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2) {
	return (f1 > f2 ? f1 : f2);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2) {
	return (f1 > f2 ? f1 : f2);
}
