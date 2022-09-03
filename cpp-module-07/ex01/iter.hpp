/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 03:47:17 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 09:50:41 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *arr, unsigned int len, void (*fp)(const T &)) {
	for (unsigned int i = 0; i < len; i++) {
		fp(arr[i]);
		std::cout << " ";
	}
	std::cout << std::endl;
}

template <typename T>
void	fp(const T &element) {
	std::cout << element;
}

#endif