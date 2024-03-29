/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:18:38 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/25 20:23:25 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>

int	main()
{
	PhoneBook	phonebook;
	std::string	input;

	while (true)
	{
		std::cout << "Choose one of 'ADD', 'SEARCH', 'EXIT' : ";
		if (!std::getline(std::cin, input))
			std::exit(EXIT_FAILURE);
		if (!input.compare("ADD")) {
			phonebook.add();
		}
		else if (!input.compare("SEARCH")) {
			phonebook.displayAll();
			phonebook.search();
		}
		else if (!input.compare("EXIT")) {
			phonebook.exit();
			break ;
		}
		else {
			std::cout << "There are no '" << input << "'.\n";
			std::cout << "again...\n\n";
		}
	}
	return (0);
}
