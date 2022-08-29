/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:16:09 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 20:19:58 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	name_ = "noname";
	hit_point_ = 10;
	energy_point_ = 10;
	attack_damage_ = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << name << " Constructor of claptrap called" << std::endl;

	name_ = name;
	hit_point_ = 10;
	energy_point_ = 10;
	attack_damage_ = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "Copy constructor of claptrap called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap() {
	std::cout << name_ << " Destructor of claptrap called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ref) {
	std::cout << "Copy assignment operator of claptrap called" << std::endl;
	
	name_ = ref.name_;
	hit_point_ = ref.hit_point_;
	energy_point_ = ref.energy_point_;
	attack_damage_ = ref.attack_damage_;
	
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (hit_point_ == 0 || energy_point_ == 0) {
		std::cout << "ClapTrap " << name_ << " is already DEAD" << std::endl;
		return ;
	}
	--energy_point_;
	std::cout << "ClapTrap " << name_ << " attacks " << target
				<< ", causing " << attack_damage_ << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (hit_point_ == 0) {
		std::cout << "ClapTrap " << name_ << " is already DEAD" << std::endl;
		return ;
	}
	if (amount <= hit_point_)		// hit point가 남아있을 경우
		hit_point_ -= amount;
	else {							// hit point가 부족한 경우 -> 죽음
		amount = hit_point_;
		hit_point_ = 0;
	}
	std::cout << "ClapTrap " << name_ << " takes damage " << amount << " points" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (hit_point_ == 0 || energy_point_ == 0) {
		std::cout << "ClapTrap " << name_ << " is already DEAD" << std::endl;
		return ;
	}
	--energy_point_;
	hit_point_ += amount;
	std::cout << "ClpaTrap " << name_ << " is repaired " << amount << " points" << std::endl;
}

void	ClapTrap::setName(const std::string name) { name_ = name; }
void	ClapTrap::setHitPoints(unsigned int hit_point) { hit_point_ = hit_point; }
void	ClapTrap::setEnergyPoints(unsigned int energy_point) { energy_point_ = energy_point; }
void	ClapTrap::setAttackDamage(unsigned int attackDamage) { attack_damage_ = attackDamage; }

std::string		ClapTrap::getName(void) const { return name_; }
unsigned int	ClapTrap::getHitPoints(void) const { return hit_point_; }
unsigned int	ClapTrap::getEnergyPoints(void) const { return energy_point_; }
unsigned int	ClapTrap::getAttackDamage(void) const { return attack_damage_; }

void	ClapTrap::printStatus(void) {
	std::cout << "====" << name_ << "'s STATUS====" << std::endl;
	std::cout << "hit(health)	: " << hit_point_ << std::endl;
	std::cout << "energy		: " << energy_point_ << std::endl;
	std::cout << "attack damage : " << attack_damage_ << std::endl;
	std::cout << std::endl;
}