/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 22:13:35 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 20:00:51 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <string>

class	Bureaucrat;

class PresidentialPardonForm : public Form
{
private:
	std::string	target_;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &copy);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm &ref);

	virtual void	execute(const Bureaucrat &executor) const;
};

#endif