/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:43:44 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 23:54:03 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern(const Intern &copy)
{
	(void)copy;
	// *this = copy;
}

Intern::~Intern() {}

Intern& Intern::operator=(const Intern &ref)
{
	(void)ref;
	return (*this);
}

Form	*Intern::createRobot_(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::createShrubbery_(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::createPresident_(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(const std::string &name_form, const std::string &target_form)
{
	const	std::string f[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	Form	*(Intern::*fp[3])(const std::string &) = {
		&Intern::createRobot_, &Intern::createShrubbery_, &Intern::createPresident_ };
	Form	*ret = NULL;

	for (int i = 0; i < 3; i++) {
		if (name_form == f[i])
		{
			ret = (this->*fp[i])(target_form);
			std::cout << "Intern creates " << ret->getName() << std::endl;
			return (ret);
		}
	}
	throw FormNameException();
}

const char	*Intern::FormNameException::what() const throw()
{
	return ("Wrong Name of Form");
}
