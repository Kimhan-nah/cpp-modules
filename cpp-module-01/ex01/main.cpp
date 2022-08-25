/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 08:00:45 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/25 11:06:45 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies = zombieHorde(5, "hannkim");

	if (!zombies)
		return (1);
	for (int i = 0; i < 5; i++)
		zombies[i].announce();
	delete [] zombies;

	return (0);
}