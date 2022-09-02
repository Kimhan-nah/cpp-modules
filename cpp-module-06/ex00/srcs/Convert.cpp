/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 10:30:34 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/02 16:26:40 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <string>
#include <cstdlib>

Convert::Convert() {}

Convert::Convert(const std::string &str)
{
	double_ = 

}

Convert::Convert(const Convert &ref)
{
	*this = ref;
}

Convert::~Convert()
{
}

Convert& Convert::operator=(const Convert &ref)
{
	return (*this);
}