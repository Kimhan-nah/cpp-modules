/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 04:01:31 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 11:24:10 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

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
	Array(unsigned int len) {
		arr_ = new T[len];
		len_ = len;

		for (unsigned int i = 0; i < len; i++) {
			arr_[i] = 0;
		}
	}
	Array(const Array &copy) {
		len_ = copy.len_;
		arr_ = new T[len_];
		for(unsigned int i = 0; i < len_; i++) {
			arr_[i] = copy.arr_[i];
		}
	}
	~Array() {
		if (arr_)
			delete [] arr_;
	}
	Array& operator=(const Array &ref) {
		if (this != &ref)
		{
			if (arr_)
				delete [] arr_;
			
			len_ = ref.len_;
			arr_ = new T[len_];
			for (unsigned int i = 0; i < len_; i++) {
				arr_[i] = ref.arr_[i];
			}
		}
		return (*this);
	}

	T		&operator[](const unsigned int index) {
		if (index >= len_) 
			throw std::out_of_range("index is out of range");
		return arr_[index];
	}


	const T		&operator[](const unsigned int index) const {
		if (index >= len_) 
			throw std::out_of_range("index is out of range");
		return arr_[index];
	}

	unsigned int	size() const { return (len_); }
};


#endif