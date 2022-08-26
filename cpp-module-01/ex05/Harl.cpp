/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:14:34 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/26 09:45:24 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger."
				<< " I really do!\n\n";
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." 
				<< " You didn’t put enough bacon in my burger!"
				<< " If you did, I wouldn’t be asking for more!\n\n";
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
				<< " I’ve been coming for years whereas you started working here since last month.\n\n";
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n\n";
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*fp[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
	{
		if (!level.compare(levels[i]))
		{
			std::cout << "[ " << level << " ]\n";
			(this->*fp[i])();		// function call
			return ;
		}
    }
}