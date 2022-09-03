/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 18:31:33 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 22:22:41 by hannkim          ###   ########.fr       */
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
	void	addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
	
	int		shortestSpan() const;
	int		longestSpan() const;

};

#endif