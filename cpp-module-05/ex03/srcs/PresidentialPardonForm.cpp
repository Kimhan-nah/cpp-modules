/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 01:00:59 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 03:38:00 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm()
	: Form("Presidential Pardon Form", 25, 5), target_("default") {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form("Presidential Pardon Form", 25, 5), target_(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
	: Form(copy), target_(copy.target_) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &ref)
{
	if (this != &ref) {
		target_ = ref.target_;
		this->Form::operator=(ref);				// ?? check
	}
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	executable(executor);
	std::cout << target_ << " has been pardoned by Zaphod Beeblebrox" << std::endl;

}
