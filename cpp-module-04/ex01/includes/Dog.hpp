/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:02:41 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/30 23:59:36 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*brain_;
public:
	Dog();
	Dog(const Dog &copy);
	virtual ~Dog();
	Dog& operator=(const Dog &ref);

	virtual void	makeSound() const;

	Brain			*getBrain() const;
};

#endif