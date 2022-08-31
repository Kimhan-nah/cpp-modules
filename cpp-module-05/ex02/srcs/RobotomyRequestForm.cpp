/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 01:00:52 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 03:34:47 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm()
    : Form("Robotomy Request Form", 72, 45), target_("default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : Form("Robotomy Request Form", 72, 45), target_(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
    : Form(copy), target_(copy.target_) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref) {
	if (this != &ref) {
		target_ = ref.target_;
	    this->Form::operator=(ref);  // ?? const멤버변수들도 처리 해야되는지? set함수로?
	}
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	executable(executor);
	std::cout << "drilling noise..." << std::endl;

	int		random;
	srand(time(NULL));
	random = rand() % 100 + 1;
	if (random >= 50)
		std::cout << target_ << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Failed to robotomize " << target_ << std::endl;
}
