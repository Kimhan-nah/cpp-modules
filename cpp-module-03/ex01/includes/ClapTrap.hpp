/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:15:39 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/29 19:20:02 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
// private:
protected:
	std::string		name_;
	unsigned int	hit_point_;			// 건강 상태 (남은 체력)
	unsigned int	energy_point_;		// 공격 or 회복할 때 1씩 소비하는 에너지
	unsigned int	attack_damage_;		// 공격 세기
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap &ref);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

    void setName(const std::string name);
    void setHitPoints(unsigned int hit_point);
    void setEnergyPoints(unsigned int energy_point);
    void setAttackDamage(unsigned int attack_damage);

    std::string getName(void) const;
    unsigned int getHitPoints(void) const;
    unsigned int getEnergyPoints(void) const;
    unsigned int getAttackDamage(void) const;

	void	printStatus(void);
};

#endif