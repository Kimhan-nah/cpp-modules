/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:33:49 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/02 00:49:07 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include <iostream>

int main()
{
	// ShrubberyCreationForm : sign 145, exec 137	<- 관목 심기
	// RobotomyRequestForm : sign 72, exec 45		<- 로봇화
	// PresidentialPardonForm : sign 25, exec 5		<- 대통령 사면

	Bureaucrat 				hannkim1("hannkim1", 1);
	Bureaucrat 				hannkim50("hannkim50", 50);

	{
		try {
			std::cout << "============= No Exception ============" << std::endl;

			std::cout << "ShrubberyCreationForm" << std::endl;
			ShrubberyCreationForm shrubbery("target");
			std::cout << shrubbery << std::endl;

			hannkim1.signForm(shrubbery);
			std::cout << shrubbery << std::endl;

			hannkim1.executeForm(shrubbery);
			std::cout << std::endl;


			std::cout << "robotomyrequestForm" << std::endl;
			RobotomyRequestForm robotomy("target");
			std::cout << robotomy << std::endl;

			hannkim1.signForm(robotomy);
			std::cout << robotomy << std::endl;

			hannkim1.executeForm(robotomy);
			std::cout << std::endl;

			std::cout << "presidentialpardonForm" << std::endl;
			PresidentialPardonForm presidential("target");
			std::cout << presidential << std::endl;

			hannkim1.signForm(presidential);
			std::cout << presidential << std::endl;

			hannkim1.executeForm(presidential);
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "[Exception] " << e.what() << std::endl;
		}
	}

	{
		std::cout << std::endl << std::endl;
		try {
			std::cout << "============= Execution Grade Exception ============" << std::endl;

			std::cout << "robotomyrequestForm" << std::endl;
			RobotomyRequestForm robotomy("target");				// sign 72, exec 45
			std::cout << robotomy << std::endl;

			hannkim50.signForm(robotomy);
			std::cout << robotomy << std::endl;
			hannkim50.executeForm(robotomy);		// exception!
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "[Exception] " << e.what() << std::endl;
		}
	
	}

	{
		std::cout << std::endl << std::endl;
		try {
			std::cout << "============= No sign Exception ============" << std::endl;

			PresidentialPardonForm presidential("target");
			std::cout << presidential << std::endl;

			hannkim1.executeForm(presidential);		// exception!
			std::cout << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "[Exeption] " << e.what() << std::endl;
		}
	}

    return (0);
}