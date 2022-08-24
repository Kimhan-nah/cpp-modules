/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:18:42 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/24 22:58:39 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() { count = 0; }

PhoneBook::~PhoneBook() {}

void	PhoneBook::add()
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNum;
	std::string	darkestSecret;

	std::cout << "===Write your information===\n";
	std::cout << "First Name : ";
	std::getline(std::cin, firstName);
	std::cout << "Last Name : ";
	std::getline(std::cin, lastName);
	std::cout << "Nickname : ";
	std::getline(std::cin, nickname);
	std::cout << "Phone Number : ";
	std::getline(std::cin, phoneNum);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, darkestSecret);

	if (phoneNum.empty() || firstName.empty() || lastName.empty() ||
			nickname.empty() || darkestSecret.empty())
		std::cout << "\nAll blanks must be filled in.\nNot saved.\n\n";
	else
	{
		std::cout <<  "\nSaved!!!\n\n\n";
		Contact newContact(count % SIZE, firstName, lastName, nickname, phoneNum, darkestSecret);
		contacts[count % SIZE] = newContact;
		count++;
	}
}

void	PhoneBook::search()
{
	std::string	idx;

	std::cout << std::endl << "Select index : ";
	std::getline(std::cin, idx);
	if (checkValidIndex(idx))
		displayOne(atoi(idx.c_str()));
	else
		std::cout << "Wrong index...\n\n";
}

void	PhoneBook::exit()
{
	std::cout << "\nThank you for using hannkim's phonebook!\n";
	std::cout << "Bye~\n";
}

void 	PhoneBook::displayAll()
{
	std::cout << std::endl;
	for (int i = 0; i < count; i++)
	{
		if (i == SIZE)
			break ;
		std::cout << "|";
		std::cout << std::setw(10) << contacts[i].getIndex();
		std::cout << "|";
		std::cout << std::setw(10) << resizeString(contacts[i].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10) << resizeString(contacts[i].getLastName());
		std::cout << "|";
		std::cout << std::setw(10) << resizeString(contacts[i].getNickname());
		std::cout << "|\n";
	}
}

void	PhoneBook::displayOne(int idx)
{
	std::cout << "Index : " << contacts[idx].getIndex() << std::endl;
	std::cout << "First Name : " << contacts[idx].getFirstName() << std::endl;
	std::cout << "Last Name : " << contacts[idx].getLastName() << std::endl;
	std::cout << "Nickname : " << contacts[idx].getNickname() << std::endl;
	std::cout << "Phone Number : " << contacts[idx].getPhoneNum() << std::endl;
	std::cout << "Darkest Secret : " << contacts[idx].getDarkestSecret() << "\n\n";
}

bool	PhoneBook::checkValidIndex(std::string idx)
{
	for (unsigned long i = 0; i < idx.length(); i++)
	{
		if (!isdigit(idx[i]))
			return (false);
	}
	int tmp = atoi(idx.c_str());
	if (tmp < 0 || tmp >= SIZE || tmp >= count || idx.empty())
		return (false);
	return (true);
}

std::string	PhoneBook::resizeString(std::string str)
{
	if (str.length() > 9)
	{
		str = str.substr(0, 9);
		str.append(1, '.');
	}
	return (str);
}