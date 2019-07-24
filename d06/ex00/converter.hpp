/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:03:45 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/23 20:57:59 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP
#include <string>
class converter
{
		public:
			converter(void);
			converter(std::string str);
			~converter(void);
			converter(converter const & src);
			converter &operator=(converter const & rhs);

			struct badConvertException : public std::exception
			{
				const char *what(void) const throw();
			};

			operator	char(void);
			operator	int(void);
			operator	float(void);
			operator	double(void);
			//Add your public methods below here
		private:
			//Add your private methods
			std::string _ogString;
			//Add your private attributes below here

};

#endif
