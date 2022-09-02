/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 22:29:35 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/02 22:37:13 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <string>

class Data
{
private:
	std::string		data_;
public:
	Data();
	Data(const Data &copy);
	~Data();
	Data& operator=(const Data &ref);

	std::string	getData() const;
	void		setData(std::string data);
};

#endif