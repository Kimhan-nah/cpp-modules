/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 04:31:22 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 11:14:59 by hannkim          ###   ########.fr       */
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
	Bureaucrat 				hannkim("hannkim", 50);
	ShrubberyCreationForm	shrubbery_form("home");

	hannkim.executeForm(shrubbery_form);


	// exception 테스트 : 잘못된 생성자, 권한 없는 생성자가 sign or execute 시도할 경우
	

    return (0);
}