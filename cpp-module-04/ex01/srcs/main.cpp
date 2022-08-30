/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:02:11 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/30 19:54:11 by hannkim          ###   ########.fr       */
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
		std::cout << "========== test =============" << std::endl;
		Animal	*arr[10];
		for (int i = 0; i < 5; i++) {
			arr[i] = new Dog();		// Dog() 생성자에서 Brain() 생성자 동적할당
			arr[i + 5] = new Cat();
		}

		for (int i = 0; i < 10; i++) {
			delete arr[i];			// 소멸자 호출되면서 내부에서 Brain() 할당 해제 안 해주면 leak
		}
	}


	// 결국 이거도 위에 테스트 케이스랑 동일한 거 아닌가?
	// 테스트 케이스를 어떤 걸 준비해야 될 지..?
	// ex01 서브젝트에서 의도한 개념은 동적할당 받은 클래스를 멤버변수로 갖는 클래스를 구현하고, 
	// 그 과정에서 메모리 초기화, 복사, 해제 등을 잘 관리했는지 확인하는 것??
	{
		std::cout << "=========== check leaks ===========" << std::endl;

		const Animal	*dog = new Dog();
		const Animal	*cat = new Cat();
		
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound();
		dog->makeSound();
		delete dog;
		delete cat;
	}

	system("leaks animal");

	return (0);
}
