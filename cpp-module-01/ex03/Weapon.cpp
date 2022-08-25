/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:50:16 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/25 15:39:26 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon(void) {}

const std::string	&Weapon::getType(void)
{
	const std::string	&type = _type;
	return (type);
}

void				Weapon::setType(std::string type)
{
	_type = type;
}
