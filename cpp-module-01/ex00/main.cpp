/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:00:45 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/26 08:39:18 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie1 = newZombie("hannkim1");
	Zombie	zombie2("hannkim2");
	randomChump("hannkim3");
	
	zombie1->announce();
	zombie2.announce();


	delete zombie1;

	return (0);
}