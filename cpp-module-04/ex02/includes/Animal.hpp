/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:00:02 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 00:24:51 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
protected:
	std::string type_;
public:
	Animal();
	Animal(const Animal &copy);
	virtual ~Animal();
	Animal& operator=(const Animal &ref);

	std::string getType() const;

	virtual void makeSound() const = 0;		// pure virtual function
};

#endif