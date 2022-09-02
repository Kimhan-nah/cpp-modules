/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 22:29:53 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/02 22:38:30 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() {}

Data::Data(const Data &copy)
{
	*this = copy;
}

Data::~Data(){}

Data& Data::operator=(const Data &ref)
{
	if (this != &ref)
		data_ = ref.data_;
	return (*this);
}

std::string		Data::getData() const {
	return (data_);
}

void			Data::setData(std::string data) {
	this->data_ = data;
}
