/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 20:54:48 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 21:06:34 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "[FragTrap] " << "Default Constructor called" << std::endl;
	hit_point_ = 100;
	energy_point_ = 100;
	attack_damage_ = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "[FragTrap] " << name << " Constructor called" << std::endl;
	hit_point_ = 100;
	energy_point_ = 100;
	attack_damage_ = 30;
}

FragTrap::FragTrap(const FragTrap &copy) {
	std::cout << "[FragTrap] " << "Copy Constructor called" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap() {
	std::cout << "[FragTrap] " << "Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &ref) {
	std::cout << "[FragTrap] " << "Copy Assignment Operator called" << std::endl;
	name_ = ref.name_;
	hit_point_ = ref.hit_point_;
	energy_point_ = ref.energy_point_;
	attack_damage_ = ref.attack_damage_;
	
	return (*this);
}

void	FragTrap::highFivesGuys() {
	if (hit_point_ == 0 || energy_point_ == 0) {
		std::cout << "Trap " << name_ << " is already DEAD" << std::endl;
		return ;
	}
	std::cout << "[FragTrap] " << name_ << " : Let's highfive guys! :)" << std::endl;
}