/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 19:46:01 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 01:22:23 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iostream>
#include "Fixed.hpp"

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

/*
	_raw = 정수 -> 고정소수점
*/
Fixed::Fixed(const int num)
{
	// this->_raw = num * (1 << _frac_bit);
	this->_raw = num << _frac_bit;
	std::cout << "Int constructor called" << std::endl;
	// std::cout << "int -> fixed : " << num << ", " << _raw << std::endl;
	
	// num = 7 = (111) = (111.00000000)
	// _raw = 7 * (1000000000)
	//	    = 7 * 2^8
	//      = 7 * 256
	//		= 1792
	//		= (0111 0000 0000)
}

/*
	_raw = 부동소수점 -> 고정소수점
*/
Fixed::Fixed(const float num)
{
	// 부동 소수점 float num을 바로 쉬프트 연산을 사용하면 컴파일 에러
		// 왜냐면 부동소수는 지수부, 가수부로 표현되기 때문에 쉬프트 연산하면 값이 보장이 안 됨
    this->_raw = static_cast<int>(roundf(num * (1 << _frac_bit)));
	std::cout << "Float constructor called" << std::endl;
	// std::cout << "float -> fixed : " << num << ", " << _raw << std::endl;

    // num = 7.62 = (111.1001 1110 1011 1000 ...)
    // _raw = roundf(7.62 * (100000000))
    //		= roundf(7.62 * 2^8)
    //		= roundf(7.62 * 256)
    //		= roundf(1950.72)
	//		= 1951
	//		= (0111 1001 1111)
	// 7.62 => 1951
}

int Fixed::getRawBits(void) const
{
//   std::cout << "getRawBits memeber function called" << std::endl;
  return (this->_raw);
}

void Fixed::setRawBits(int const raw)
{
  std::cout << "setRawBits memeber function called" << std::endl;
  _raw = raw;
}

/*
	고정소수점 -> 부동소수점
*/
float Fixed::toFloat(void) const
{
	// return (static_cast<float>(this->getRawBits()) / (1 << _frac_bit));
	// return (static_cast<float>(_raw) / (1 << _frac_bit));

	// 왜 밑에꺼는 안됨????????? 

	// return ( static_cast<float>(this->_raw / (1 << _frac_bit)));
	// return ( static_cast<float>(_raw / (1 << _frac_bit)));
	// return (static_cast<float>(_raw >> _frac_bit));
}

/*
	고정소수점 -> 정수
*/
int Fixed::toInt(void) const			// 고정소수점 -> 정수
{
	return (_raw >> _frac_bit);
}

/*
	<< 연산자 오버로딩
	out stream << (고정소수점->부동소수점 표현)
*/
std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}