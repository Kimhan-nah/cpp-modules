/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:31:33 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 20:59:41 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <vector>

class Span
{
private:
	unsigned int	n_;
	std::vector<int> numbers_;
public:
	Span();
	Span(unsigned int n);
	Span(const Span &ref);
	~Span();
	Span& operator=(const Span &ref);

	void	addNumber(const int num);
	int		shortestSpan() const;
	int		longestSpan() const;

	void	Span::addNumberSequence(std::vector<int>::iterator pos, std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif