/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:30:26 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/02 21:57:08 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <exception>
class Convert
{
private:
	std::string	value_;
public:
	Convert();
	Convert(const std::string &str);
	Convert(const Convert &copy);
	~Convert();
	Convert &operator=(const Convert &convert);

	void	convert();
	void	convertChar(const double d);
	void	convertInt(const double d);
	void	convertFloat(const double d);
	void	convertDouble(const double d);

	int		checkNanInf();

};

#endif
