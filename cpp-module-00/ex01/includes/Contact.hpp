/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:39:57 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/24 17:20:10 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {
private:
	int 		index;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string	phoneNum;
	std::string	darkestSecret;
public:
	Contact();
	Contact(int index, std::string firstName, std::string lastName, \
			std::string nickname, std::string phoneNum, std::string darkestSecret);
	~Contact();
	int			getIndex();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNum();
	std::string getDarkestSecret();
};
#endif
