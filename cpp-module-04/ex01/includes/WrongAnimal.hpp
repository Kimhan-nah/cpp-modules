/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:07:02 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/30 14:09:47 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
protected:
	std::string type_;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copy);
	~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal &ref);

	std::string getType() const;
	void 		makeSound() const;
};

#endif