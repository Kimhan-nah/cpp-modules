/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 22:13:25 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 02:23:45 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <string>

class	Bureaucrat;

class RobotomyRequestForm : public Form
{
private:
	std::string	target_;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &copy);
	~RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm &ref);

	virtual void	execute(const Bureaucrat &executor) const;
};

#endif