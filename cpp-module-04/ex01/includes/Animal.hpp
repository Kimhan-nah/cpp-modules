/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:01:21 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/30 14:00:02 by hannkim          ###   ########.fr       */
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

	std::string getType() const;		// const 멤버함수는 객체 데이트 수정 불가능

	virtual void makeSound() const;		// virtual function
};

#endif