/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 22:43:51 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/01 23:59:21 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"

class Form;

class Intern
{
private:
	Form	*createRobot_(const std::string &target);
	Form	*createShrubbery_(const std::string &target);
	Form	*createPresident_(const std::string &target);
public:
	Intern();
	Intern(const Intern &copy);
	~Intern();
	Intern& operator=(const Intern &ref);

	Form	*makeForm(const std::string &name_form, const std::string &target_form);

	class FormNameException : public std::exception {
		const char *what() const throw();
	};
};

#endif