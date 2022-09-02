/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 04:01:31 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 04:18:15 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
private:
	T				*arr_;
	unsigned int	len_;
public:
	Array() {
		arr_ = NULL;
		len_ = 0;
	}
	Array(unsigned int n) {
		arr_ = new T[n];
		len_ = n;
	}
	Array(const Array &copy) {
		this = copy;
	}
	~Array();
	Array& operator=(const Array &ref) {
		for (unsigned int i = 0; i < len_; i++) {
			arr_[i] = ref.arr_[i];
		}
		len_ = ref.len_;
	}
};


#endif