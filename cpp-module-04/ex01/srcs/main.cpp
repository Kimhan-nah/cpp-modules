/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:02:11 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 00:57:19 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "=============== TEST =================" << std::endl;
		Animal	*arr[10];
		for (int i = 0; i < 5; i++) {
			arr[i] = new Dog();		// Dog() 생성자에서 Brain() 생성자 동적할당
			std::cout << std::endl;
		}
		for (int i = 5; i < 10; i++) {
			arr[i] = new Cat();
			std::cout << std::endl;
		}

		std::cout << std::endl;
		std::cout << std::endl;
		for (int i = 0; i < 10; i++) {
			delete arr[i];			// 소멸자 호출되면서 내부에서 Brain() 할당 해제 안 해주면 leak
			std::cout << std::endl;
		}
	}

    {
		std::cout << std::endl;
		std::cout << "================= Check Dog's Deep Copy =====================" << std::endl;

		Dog 	dog;
		Dog		copyDog = dog;

		Brain	*dogBrain = dog.getBrain();
		Brain	*copyDogBrain = copyDog.getBrain();

		std::cout << "\nBefore set brain's ideas\n";
		std::cout << "Dog : " << *dogBrain->getIdeas() << std::endl;
		std::cout << "Copy Dog : " << *copyDogBrain->getIdeas() << std::endl;

		std::string bye("bye brain!");
		for (int i = 0; i < 10; i++) {
			copyDogBrain->setIdeas(i, bye);
		}

		std::cout << "\nAfter set brain's ideas\n";
		std::cout << "Dog : " << *dogBrain->getIdeas() << std::endl;
		std::cout << "Copy Dog : " << *copyDogBrain->getIdeas() << std::endl;
		std::cout << std::endl << std::endl;
    }

    {
		std::cout << std::endl << std::endl;
		std::cout << "================= Check Cat's Deep Copy =====================" << std::endl;

		Cat 	cat;
		Cat		copyCat = cat;

		Brain	*catBrain = cat.getBrain();
		Brain	*copyCatBrain = copyCat.getBrain();

		std::cout << "\nBefore set brain's ideas\n";
		std::cout << "Cat : " << *catBrain->getIdeas() << std::endl;
		std::cout << "Copy Cat : " << *copyCatBrain->getIdeas() << std::endl;

		std::string bye("bye brain!");
		for (int i = 0; i < 10; i++) {
			copyCatBrain->setIdeas(i, bye);
		}

		std::cout << "\nAfter set brain's ideas\n";
		std::cout << "Cat : " << *catBrain->getIdeas() << std::endl;
		std::cout << "Copy Cat : " << *copyCatBrain->getIdeas() << std::endl;

		std::cout << std::endl << std::endl;
    }

	std::cout << std::endl;
	std::cout << "================= Check LEAKS ================" << std::endl;
    system("leaks animal");

	return (0);
}
