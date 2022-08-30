/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:02:11 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/30 15:49:46 by hannkim          ###   ########.fr       */
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
	const Animal	*meta = new Animal();		// Animal()
	const Animal	*j = new Dog();				// Animal(), Dog()
	const Animal	*i = new Cat();				// Animal(), Cat()

	std::cout << j->getType() << " " << std::endl;		// Dog
	std::cout << i->getType() << " " << std::endl;		// Cat
	j->makeSound();			// virtual function
	i->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;


	std::cout << std::endl << "=============" << std::endl << std::endl;

	const WrongAnimal	*wrong_animal = new WrongAnimal();		// WrongAnimal()
	const WrongAnimal	*wrong_cat = new WrongCat();			// WrongAnimal(), WrongCat()

	std::cout << wrong_animal->getType() << " : ";
	wrong_animal->makeSound();			// No virtual function
	std::cout << wrong_cat->getType() << " : ";
	wrong_cat->makeSound();

	delete wrong_cat;
	delete wrong_animal;

	return (0);
}