/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:35:42 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/03 21:03:36 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int i)
{
	typename T::iterator iter = std::find(container.begin(), container.end(), i);
	if (iter == container.end())
		throw std::runtime_error("Error: Easyfind fail");
	return (iter);
}

#endif