/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 03:46:56 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 04:00:10 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main()
{
	{
		const char *arr = "abcdefg";
		iter(arr, 7, fp);
	}
	{
		int arr[5] = {0, 1, 2, 3, 4};
		iter(arr, 5, fp);
	}
	{
		std::string *arr = new std::string[5];
		for (int i = 0; i < 5; i++) {
			arr[i] = "hi";
		}
		iter(arr, 5, fp);
	}

	return 0;
}