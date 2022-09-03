/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hannkim <hannkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 22:32:01 by hannkim           #+#    #+#             */
/*   Updated: 2022/09/04 00:52:44 by hannkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::stack<T>::container_type::iterator		iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;

    MutantStack() {}
    MutantStack(const MutantStack &copy) : std::stack<T>(copy) {}
    virtual ~MutantStack() {};
    MutantStack &operator=(const MutantStack &ref) {
		return std::stack<T>::operator=(ref);
	}

	iterator		begin() { return std::stack<T>::c.begin(); }
	iterator		end() { return std::stack<T>::c.end(); }
	iterator		rbegin() { return std::stack<T>::c.rbegin(); }
	iterator		rend() { return std::stack<T>::c.rend(); }

	const_iterator		begin() const { return std::stack<T>::c.begin(); }
	const_iterator		end() const { return std::stack<T>::c.end(); }
	const_iterator		rbegin() const { return std::stack<T>::c.rbegin(); }
	const_iterator		rend() const { return std::stack<T>::c.rend(); }

};

#endif