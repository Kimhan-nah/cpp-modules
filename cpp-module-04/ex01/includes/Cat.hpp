/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:02:48 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/30 23:59:32 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*brain_;
public:
	Cat();
	Cat(const Cat &copy);
	virtual	~Cat();
	Cat& operator=(const Cat &ref);

	virtual void	makeSound() const;

	Brain			*getBrain() const;
};

#endif