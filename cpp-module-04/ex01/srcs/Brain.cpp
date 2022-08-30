/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:09:12 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/31 00:02:32 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	for (int i = 0; i < 100; i++) {
		ideas_[i] = "hello brain!";
	}
	std::cout << "[Brain] Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "[Brain] Copy Constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "[Brain] Destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain &ref)
{
	for (int i = 0; i < 100; i++) {
		ideas_[i] = ref.ideas_[i];
	}
	std::cout << "[Brain] Copy Assignment Operator called" << std::endl;
	return (*this);
}

const std::string	*Brain::getIdeas() const
{
	return (ideas_);
}

void				Brain::setIdeas(int i, std::string &idea)
{
	ideas_[i] = idea;
}