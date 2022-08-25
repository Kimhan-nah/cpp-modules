/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:00:45 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/25 09:58:43 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie1 = newZombie("hannkim1");
	Zombie	zombie2("hannkim2");
	
	zombie1->announce();
	zombie2.announce();

	randomChump("hannkim3");

	delete zombie1;

	return (0);
}