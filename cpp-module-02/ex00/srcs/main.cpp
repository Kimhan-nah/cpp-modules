/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:08:21 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/27 19:12:21 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed 	a;			// Default constructor called
	Fixed	b(a);		// Copy constructor called
							// Copy assignment operator called
								// getRawBits member function called
	Fixed	c;			// Default constructor called

	c = b;

	std::cout << a.getRawBits() << std::endl;		// getRawBits memeber function called
													// 0
	std::cout << b.getRawBits() << std::endl;		// getRawBits memeber function called
													// 0
	std::cout << c.getRawBits() << std::endl;		// getRawBits memeber function called
													// 0

	return (0);
}
