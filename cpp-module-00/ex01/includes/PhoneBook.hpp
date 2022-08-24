/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:40:05 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/24 17:03:26 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <string>
# include "Contact.hpp"
# define SIZE 8

class PhoneBook {
private:
	int		count;
	Contact	contacts[SIZE];
public:
	PhoneBook();
	~PhoneBook();
	void		add();
	void		search();
	void		exit();
	void		displayAll();
	void		displayOne(int idx);
	bool		checkValidIndex(std::string idx);
	std::string	resizeString(std::string str);
};

#endif
