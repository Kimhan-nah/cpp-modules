/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:02:11 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 00:54:44 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << std::endl << "============= Test ==============" << std::endl;
		const Animal	*meta = new Animal();		// Animal()
		const Animal	*j = new Dog();				// Animal(), Dog()
		const Animal	*i = new Cat();				// Animal(), Cat()

		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;		// Dog
		std::cout << i->getType() << " " << std::endl;		// Cat
		i->makeSound();								// virtual function <- will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;

		delete i;
		delete j;
		delete meta;
	}

	{
		std::cout << std::endl;
		std::cout << std::endl << "============= Wrong Animal Test ==============" << std::endl;

		const WrongAnimal	*wrong_animal = new WrongAnimal();		// WrongAnimal()
		const WrongAnimal	*wrong_cat = new WrongCat();			// WrongAnimal(), WrongCat()

		std::cout << std::endl;
		std::cout << wrong_animal->getType() << " : ";
		wrong_animal->makeSound();									// No virtual function
		std::cout << wrong_cat->getType() << " : ";
		wrong_cat->makeSound();
		std::cout << std::endl;

		delete wrong_cat;
		delete wrong_animal;
	}


	return (0);
}