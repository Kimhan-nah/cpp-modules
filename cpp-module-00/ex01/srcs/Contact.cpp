/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:18:41 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/24 15:11:22 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(int index, std::string firstName, std::string lastName, \
					std::string nickname, std::string phoneNum, std::string darkestSecret)
{
	this->index = index;
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickname = nickname;
	this->phoneNum = phoneNum;
	this->darkestSecret = darkestSecret;
}

Contact::~Contact() {}

int 		Contact::getIndex()
{
	return index;
}

std::string Contact::getFirstName()
{
	return firstName;
}

std::string Contact::getLastName()
{
	return lastName;
}

std::string Contact::getNickname()
{
	return nickname;
}

std::string Contact::getPhoneNum()
{
	return phoneNum;
}

std::string Contact::getDarkestSecret()
{
	return darkestSecret;
}
