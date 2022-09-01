/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 04:31:27 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/02 00:36:22 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : name_("hannkim"), grade_(150) {}

Bureaucrat::Bureaucrat(const std::string &name) : name_(name), grade_(150) {}

Bureaucrat::Bureaucrat(const std::string &name, const int grade) : name_(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name_(copy.name_), grade_(copy.grade_) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &ref)
{
	if (this != &ref)
		grade_ = ref.grade_;
	return (*this);
}

std::string		Bureaucrat::getName() const
{
	return (name_);
}

int				Bureaucrat::getGrade() const
{
	return (grade_);
}

void			Bureaucrat::increaseGrade()
{
	if (grade_ <= 1)
		throw GradeTooHighException();
	--grade_;
}

void			Bureaucrat::decreaseGrade()
{
	if (grade_ >= 150)
		throw GradeTooLowException();
	++grade_;
}

// If the form got signed, it will print "<bureaucrat> signed <form>" or "<bureaucrat> couldn't sign <form> because <reason>"
void			Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);
		std::cout << name_ << " signed " << form.getName() << std::endl;
	} catch (const std::exception &e) {
		std::cout << name_ << " couldn't sign " << form.getName() 
					<< " because " << e.what() << std::endl;
	}
}

// Exception Class
const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too High");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
