/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 22:29:50 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/02 23:11:32 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <cstdint>
#include <iostream>

// Data *ptr -> unsigned integer type
static uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

// unsigned integer type -> Data *ptr
static Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data	data;

	data.setData("hannkim");
	
	uintptr_t	int_hannkim;
	Data		*ptr_hannkim;

	int_hannkim = serialize(&data);
	ptr_hannkim = deserialize(int_hannkim);

    std::cout << "======= serialize (unsigned int -> Data *) =======" << std::endl;
	
	std::cout << std::endl;
	std::cout << "Data address : " << &data << std::endl;
	std::cout << "Data address : " << ptr_hannkim << std::endl;

	std::cout << std::endl;
	std::cout << "data value : " << data.getData() << std::endl;
	std::cout << "ptr_hannkim value : " << ptr_hannkim->getData() << std::endl;

	return (0);
}