/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:30:34 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 00:47:18 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

Convert::Convert() {}

Convert::Convert(const std::string &str) { value_ = str; }

Convert::Convert(const Convert &ref) { *this = ref; }

Convert::~Convert() {}

Convert& Convert::operator=(const Convert &ref)
{
	if (this != &ref)
		value_ = ref.value_;
	return (*this);
}

void	Convert::convert()
{
	double str_to_d = strtod(value_.c_str(), NULL);

	Convert::convertChar(str_to_d);
	Convert::convertInt(str_to_d);
	Convert::convertFloat(str_to_d);
	Convert::convertDouble(str_to_d);
}

void	Convert::convertChar(const double d)
{
	std::cout << "char: ";
	if (checkNanInf())
		std::cout << "impossible" << std::endl;
	else if (d < 33 || d >= 127)
		std::cout << "impossible" << std::endl;
	else
		std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
}

void	Convert::convertInt(const double d)
{
	std::cout << "int: ";
	if (checkNanInf() || d > 2147483647 || d <  -2147483648)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
}

void	Convert::convertFloat(const double d)
{
	std::cout <<"float: ";
	int nan_inf = checkNanInf();
	if (nan_inf == 1 || nan_inf == 2)
		std::cout << "nanf" << std::endl;
	else if (nan_inf == 3 || nan_inf == 4) {
		if (value_.find("-"))
			std::cout << "-";
		std::cout << "inff" << std::endl;
	}
	else if (value_.find(".") != std::string::npos)		// find
		std::cout << static_cast<float>(d) << "f" << std::endl;
	else
		std::cout << static_cast<float>(d) << ".0f" << std::endl;
}

void	Convert::convertDouble(const double d)
{
	std::cout <<"double: ";

	int nan_inf = checkNanInf();
	if (nan_inf == 1 || nan_inf == 2)
		std::cout << "nan" << std::endl;
	else if (nan_inf == 3 || nan_inf == 4) {
		if (value_.find("-"))
			std::cout << "-";
		std::cout << "inf" << std::endl;
	}
	else if (value_.find(".") != std::string::npos)		// find
		std::cout << static_cast<float>(d) << std::endl;
	else
		std::cout << static_cast<float>(d) << ".0" << std::endl;
}

int		Convert::checkNanInf()
{
	if (!(value_.compare("nan")) || !(value_.compare("-nan")))
		return (1);
	if (!(value_.compare("nanf")) || !(value_.compare("-nanf")))
		return (2);
	if (!(value_.compare("inf")) || !(value_.compare("-inf")))
		return (3);
	if (!(value_.compare("inff")) || !(value_.compare("-inff")))
		return (4);
	return (0);
}
