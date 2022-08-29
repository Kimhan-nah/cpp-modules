/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:09:07 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 20:08:55 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "[ScavTrap] << Default Constructor called" << std::endl;

	hit_point_ = 100;
	energy_point_ = 50;
	attack_damage_ = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "[ScavTrap] " << name << " Constructor called" << std::endl;
	
	hit_point_ = 100;
	energy_point_ = 50;
	attack_damage_ = 20;

}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	std::cout << "[ScavTrap] Constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap() {
	std::cout << "[ScavTrap] " << name_ << " Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ref) {
	std::cout << "[ScavTrap] Copy Assignment Operator called" << std::endl;
	name_ = ref.name_;
	hit_point_ = ref.hit_point_;
	energy_point_ = ref.energy_point_;
	attack_damage_ = ref.attack_damage_;
	
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	if (hit_point_ == 0 || energy_point_ == 0) {
		std::cout << "[ScavTrap] " << name_ << " is already DEAD" << std::endl;
		return ;
	}
	--energy_point_;
	std::cout << "[ScavTrap]" << name_ << " attacks " << target
				<< ", causing " << attack_damage_ << " points of damage!" << std::endl;

}

// display a message informing that ScavTrpa is now in Gate keeeper mode.
void	ScavTrap::guardGate() {
	std::cout << "[ScavTrap] " << name_ << "is now in Gatekeepr mode" << std::endl;
}