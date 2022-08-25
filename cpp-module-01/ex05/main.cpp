/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 23:14:40 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/26 08:01:57 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("WARNING");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("ERROR");
}
