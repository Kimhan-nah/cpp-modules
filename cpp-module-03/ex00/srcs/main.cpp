/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:15:50 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 22:16:08 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap hannkim("hannkim");
	ClapTrap monster("monster");

	std::cout << std::endl;
	std::cout << "<<TEST1>>" << std::endl;
	hannkim.attack("monster");
	monster.takeDamage(hannkim.getAttackDamage());
	hannkim.printStatus();
	monster.printStatus();

	std::cout << "<<TEST2>>" << std::endl;
	hannkim.attack("monster");
	monster.takeDamage(hannkim.getAttackDamage());
	hannkim.printStatus();
	monster.printStatus();

	std::cout << "<<TEST3>>" << std::endl;
	hannkim.beRepaired(3);
	hannkim.printStatus();
	monster.printStatus();
	
	return (0);
}