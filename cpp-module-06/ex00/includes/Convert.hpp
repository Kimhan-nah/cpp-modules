/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:30:26 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/02 16:26:03 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

class Convert
{
private:
	double	double_;
public:
	Convert();
	Convert(const std::string &str);
	Convert(const Convert &copy);
	~Convert();
	Convert &operator=(const Convert &convert);

	void	convertChar(double d);
	void	convertInt(double d);
	void	convertFloat(double d);
	void	convertDouble(double d);

}

#endif
