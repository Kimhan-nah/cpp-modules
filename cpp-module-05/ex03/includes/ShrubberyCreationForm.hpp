/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 21:54:17 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 20:01:08 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <string>

class	Bureaucrat;

class ShrubberyCreationForm : public Form
{
private:
	std::string target_;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &ref);

	virtual void	execute(const Bureaucrat &executor) const;
};

#endif