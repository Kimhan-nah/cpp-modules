/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:30:37 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/02 20:46:14 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2 || !(*argv[1])) {
		std::cout << "Error : Argument" << std::endl;
		return (1);
	}

	std::string	value = argv[1];

	Convert convert(value);
	convert.convert();

	return (0);
}
