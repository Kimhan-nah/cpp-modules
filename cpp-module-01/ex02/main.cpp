/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:16:42 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/25 11:46:51 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "1. The memory address of the str : " << &str << std::endl;
	std::cout << "2. The memory address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "3. The memory address held by stringREF : " << &stringREF << std::endl;

	std::cout << "\n4. The value of the str : " << str << std::endl;
	std::cout << "5. The value pointeed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "6. The value pointed to by stringREF : " << stringREF << std::endl;

	return (0);
}
