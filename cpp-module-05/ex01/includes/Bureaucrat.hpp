/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 04:31:15 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 11:29:01 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	name_;
	int					grade_;
public:
	Bureaucrat();
	Bureaucrat(const std::string &name);
	Bureaucrat(const std::string &name, const int grade);
	Bureaucrat(const Bureaucrat &copy);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat &ref);

	std::string		getName() const;
	int				getGrade() const;
	void			increaseGrade();
	void			decreaseGrade();
	void			signForm(Form &form);

	// exception class
	class GradeTooHighException : public std::exception {
		const char	*what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char	*what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj);

#endif