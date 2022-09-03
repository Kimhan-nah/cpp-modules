/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 23:20:15 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/04 00:59:29 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
	{
		std::cout << "=================== subject test ===================" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		
		std::stack<int> s(mstack);		// copy

		std::cout << "( check copy constructor )" << std::endl;
		std::cout << "s's size : " << s.size() << std::endl;
		std::cout << "s's top : " << s.top() << std::endl;

		std::cout << "mstack's size : " << mstack.size() << std::endl;
		std::cout << "mstack's top : " << mstack.top() << std::endl;
	}

	{
		std::cout << "=================== iterator test ===================" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		for (MutantStack<int>::iterator iter = mstack.begin(); iter != mstack.end() ; ++iter) 
			std::cout << *iter << ' ';
		std::cout << '\n';	
	}

    return (0);
}