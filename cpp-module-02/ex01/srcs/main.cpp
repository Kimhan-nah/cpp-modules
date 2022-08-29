/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:08:21 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 11:13:03 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout <<"a is " << a.toInt() << " as integer" << std::endl;
	std::cout <<"b is " << b.toInt() << " as integer" << std::endl;
	std::cout <<"c is " << c.toInt() << " as integer" << std::endl;
	std::cout <<"d is " << d.toInt() << " as integer" << std::endl;

	return (0);
}
