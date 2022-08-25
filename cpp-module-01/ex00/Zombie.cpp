/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:00:50 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/25 10:39:18 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << _name << " is created.\n";
}

Zombie::~Zombie(void)
{
	std::cout << _name << " is destroyed.\n";
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnnzzzzzzZ...\n";
}