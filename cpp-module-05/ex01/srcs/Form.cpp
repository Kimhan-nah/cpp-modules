/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:47:36 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 01:00:10 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"
#include <exception>
#include <iostream>

Form::Form() : name_("hannkim"), signed_(false), sign_grade_(5), exec_grade_(8) {}

Form::Form(std::string name, int sign_grade, int exec_grade)
		: name_(name), signed_(false), sign_grade_(sign_grade), exec_grade_(exec_grade)
{
	if (sign_grade < 1 || exec_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || exec_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &copy)
		: name_(copy.name_), signed_(copy.signed_), sign_grade_(copy.sign_grade_), exec_grade_(copy.exec_grade_) {}

Form::~Form() {}

Form& Form::operator=(const Form &ref)
{
	if (this != &ref)
		signed_ = ref.signed_;
	return (*this);
}

// getter
std::string	Form::getName() const
{
	return (name_);
}

bool		Form::getSigned() const
{
	return (signed_);
}

int			Form::getSignGrade() const
{
	return (sign_grade_);
}

int			Form::getExecGrade() const
{
	return (exec_grade_);
}

// Exception Class's what() function overriding
const char	*Form::GradeTooHighException::what() const throw ()
{
	return ("Grade is too High");
}

const char	*Form::GradeTooLowException::what() const throw ()
{
	return ("Grade is too Low");
}

// change the form status to signed
void		Form::beSigned(const Bureaucrat &authority)
{
	if (authority.getGrade() > sign_grade_)
		throw GradeTooLowException();
	if (signed_)
		std::cout << name_ << " is already signed" << std::endl;
	else
		signed_ =true;
}

std::ostream	&operator<<(std::ostream &out, const Form &obj)
{
	out << "Form Name : " << obj.getName() << std::endl
		<< "Signed : " << obj.getSigned() << std::endl
		<< "Signalbe Grade : " << obj.getSignGrade() << std::endl
		<< "Executable Grade : " << obj.getExecGrade() << std::endl << std::endl;
	return (out);
}