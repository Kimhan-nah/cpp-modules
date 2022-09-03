/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:31:37 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 21:30:37 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <exception>

Span::Span() {}

Span::Span(unsigned int n) { n_ = n; }

Span::Span(const Span &ref) { *this = ref; }

Span::~Span() {}

Span& Span::operator=(const Span &ref)
{
	n_ = ref.n_;
	numbers_ = ref.numbers_;
	return (*this);
}

void			Span::addNumber(const int num)
{
	if (numbers_.size() >= n_)
		throw std::runtime_error("out of bounds");
	numbers_.push_back(num);
}

int	Span::shortestSpan() const
{
	if (numbers_.size() <= 1)
		throw std::runtime_error("The size of the vector is insufficient");
	std::vector<int> tmp(numbers_);
	std::sort(tmp.begin(), tmp.end());		// ascending order
	int min = tmp[1] - tmp[0];
	for (int i = 0; i + 1 < tmp.size(); i++) {
		if (tmp[i + 1] - tmp [i] < min)
			min = tmp[i + 1] - tmp[i];
	}
	return (min);
}

int	Span::longestSpan() const
{
	if (numbers_.size() <= 1)
		throw std::runtime_error("The size of the vector is insufficient");
	std::vector<int> tmp(numbers_);
	std::sort(tmp.begin(), tmp.end());		// ascending order
	int max = *(std::max_element(numbers_.begin(), numbers_.end())) - *(std::min_element(numbers_.begin(), numbers_.end()));
	return (max);
}

void	Span::addNumberSequence(std::vector<int>::iterator pos, std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	
	// void insert (iterator position, InputIterator first, InputIterator last);
	numbers_.insert(pos, begin, end);
}