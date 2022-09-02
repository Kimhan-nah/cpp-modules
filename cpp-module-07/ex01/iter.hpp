/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 03:47:17 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 03:58:42 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *arr, unsigned int len, void (*fp)(T const &)) {
	for (unsigned int i = 0; i < len; i++) {
		fp(arr[i]);
		std::cout << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void	fp(T const &element) {
	std::cout << element;
}

#endif