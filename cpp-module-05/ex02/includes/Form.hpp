/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:47:40 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 13:36:02 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class	Bureaucrat;

// Abstract Class
class Form
{
private:
	const std::string	name_;
	bool				signed_;
	const int			sign_grade_;
	const int			exec_grade_;
public:
	Form();
	Form(std::string name, int sign_grade, int exec_grade);
	Form(const Form &copy);
	~Form();

	Form& operator=(const Form &ref);

	// getter
	std::string	getName() const;
	bool		getSigned() const;
	int			getSignGrade() const;
	int			getExecGrade() const;
	// member function
	void	beSigned(const Bureaucrat &authority);

	virtual void	execute(const Bureaucrat &executor) const = 0;		// pure virtual function

	// Exception Class
	class GradeTooHighException : public std::exception {
		const char	*what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char	*what() const throw();
	};

};

std::ostream	&operator<<(std::ostream &out, const Form &obj);

#endif