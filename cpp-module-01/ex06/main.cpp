/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:14:40 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/26 07:47:21 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Error : Arguments\n";
		exit(EXIT_FAILURE);
	}
	harl.complain(argv[1]);

	return (0);
}
