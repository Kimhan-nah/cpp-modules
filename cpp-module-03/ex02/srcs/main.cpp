/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:15:50 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 21:49:44 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <iostream>

int main(void)
{
	ScavTrap hannkim("hannkim");
	FragTrap monster("monster");

	// initialization
	std::cout << std::endl;
	std::cout << "<<<<<<<<<<Initialization Status>>>>>>>>>>" << std::endl;
	hannkim.printStatus();
	monster.printStatus();
	std::cout << std::endl;

	// attack
	std::cout << "<<<<<<<<<<<<<<<<<<TEST1>>>>>>>>>>>>>>>>>>" << std::endl;
	hannkim.attack("monster");
	monster.takeDamage(hannkim.getAttackDamage());
	hannkim.printStatus();
	monster.printStatus();
	std::cout << std::endl;

	// attack
	std::cout << "<<<<<<<<<<<<<<<<<<TEST2>>>>>>>>>>>>>>>>>>" << std::endl;
	hannkim.attack("monster");
	monster.takeDamage(hannkim.getAttackDamage());
	hannkim.printStatus();
	monster.printStatus();
	std::cout << std::endl;

	// be repaired
	std::cout << "<<<<<<<<<<<<<<<<<<TEST3>>>>>>>>>>>>>>>>>>" << std::endl;
	monster.beRepaired(10);
	hannkim.printStatus();
	monster.printStatus();
	std::cout << std::endl;

	hannkim.guardGate();
	std::cout << std::endl;

	monster.highFivesGuys();
	std::cout << std::endl;
	
	return (0);
}