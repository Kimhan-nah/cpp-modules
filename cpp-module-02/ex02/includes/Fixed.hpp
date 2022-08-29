/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:08:18 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/28 23:25:09 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int _raw;
	static const int _frac_bit;

public:
	Fixed();
	Fixed(const Fixed &fixed);  // 복사 생성자
	~Fixed();
	Fixed &operator=(const Fixed &fixed);  // 복사 대입 연산자 오버로딩

	Fixed(const int num);
	Fixed(const float num);

	int getRawBits(void) const;  // const 멤버 함수 -> const 객체 대상으로 호출 가능
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;

	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;
	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;

	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;

	Fixed	&operator++(void);		// ++pre
	Fixed	operator++(int);		// post++
	Fixed	&operator--(void);		// --pre
	Fixed	operator--(int);		// post--

	// static function
	static Fixed 		&min(Fixed &f1, Fixed &f2);
	static const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static Fixed 		&max(Fixed &f1, Fixed &f2);
	static const Fixed	&max(const Fixed &f1, const Fixed &f2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif