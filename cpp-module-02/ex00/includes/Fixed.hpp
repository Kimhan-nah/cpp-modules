/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:08:18 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/27 10:30:56 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					_raw;
	static const int	_fraction_bit;
public:
	Fixed();
	Fixed(const Fixed &ref);
	~Fixed();
	Fixed& operator=(const Fixed &ref);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif