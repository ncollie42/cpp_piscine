/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 10:54:26 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/25 13:13:45 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
#include <exception>

class span
{
		public:
			span(void);
			span(int n);
			~span(void);
			span(span const & src);
			span &operator=(span const & rhs);
			//Add your public methods below here
			void addNumber(int n);
			int shortestSpan(void) const;
			int longestSpan(void) const;
			struct FullException : public std::exception {
				const char* what() const throw();
			};
			struct NotEnoughException : public std::exception {
				const char* what() const throw();
			};
		private:
			//Add your private methods
			unsigned int _limit;
			unsigned int _curent;
			int			*_ptr;
			//Add your private attributes below here

};

#endif