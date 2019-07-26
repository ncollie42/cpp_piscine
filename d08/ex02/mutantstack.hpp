/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 17:20:54 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/25 21:12:19 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MutantStack_HPP
# define MutantStack_HPP
#include <stack>
#include <iterator>
// #include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
		public:
			MutantStack(void) : std::stack<T>() {}
			~MutantStack(void){}
			MutantStack(MutantStack const & src) : std::stack<T>(src) {}
			MutantStack &operator=(MutantStack const & rhs)
			{
				std::stack<T>::operator=(rhs);
				return *this;
			}
		typedef typename std::deque<T>::iterator iterator;
		iterator begin(void) { return MutantStack::c.begin(); }
		iterator end(void) { return MutantStack::c.end(); }

};

#endif