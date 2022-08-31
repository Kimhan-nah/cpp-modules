/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 04:31:22 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 11:44:37 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include <iostream>

int main()
{
	try {			// exception -> throw -> catch (exception &e)
		Form		form("42 Form", 50, 100);
		Bureaucrat hannkim("hannkim", 1);
		Bureaucrat han("han", 60);
		
		std::cout << "============== Before Sign =============" << std::endl;
		std::cout << form << std::endl;
		hannkim.signForm(form);
		std::cout << std::endl;
		std::cout << "============== After Sign ==============" << std::endl;
		std::cout << form << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}


	try {			// exception -> throw -> catch (exception &e)
		Form		form("42 Form", 50, 100);
		Bureaucrat hannkim("hannkim", 1);
		Bureaucrat han("han", 60);

		std::cout << "============== Before Sign =============" << std::endl;
		std::cout << form << std::endl;
		han.signForm(form);			// throw
		std::cout << std::endl;
		std::cout << "============== After Sign ==============" << std::endl;
		std::cout << form << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}