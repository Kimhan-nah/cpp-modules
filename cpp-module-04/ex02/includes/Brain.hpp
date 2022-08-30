/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:01:15 by hannkim           #+#    #+#             */
/*   Updated: 2022/08/30 23:27:13 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
private:
	std::string	ideas_[100];
public:
	Brain();
	Brain(const Brain &copy);
	~Brain();
	Brain& operator=(const Brain &ref);

	const std::string *getIdeas() const;
	void				setIdeas(int i, std::string &idea);

};

#endif