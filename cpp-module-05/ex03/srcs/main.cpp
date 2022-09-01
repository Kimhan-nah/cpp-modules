/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 13:33:49 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 23:55:34 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"
#include <iostream>

int main()
{
	// ShrubberyCreationForm : sign 145, exec 137	<- 관목 심기
	// RobotomyRequestForm : sign 72, exec 45		<- 로봇화
	// PresidentialPardonForm : sign 25, exec 5		<- 대통령 사면
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat br("someone", 13);

		br.signForm(*rrf);
		rrf->execute(br);

		Form* scf;
		scf = someRandomIntern.makeForm("shrubbery creation", "BERRYBBERY");

		Form* ppf;
		ppf = someRandomIntern.makeForm("presidential pardon", "prisoner");

		delete ppf;
		delete scf;
		delete rrf;
	} catch (const std::exception& e) {
		std::cout << e.what() << '\n';
	}

    return (0);
}