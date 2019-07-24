/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 20:03:45 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/23 20:59:41 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "converter.hpp"

converter::converter(void)
{
	return ;
}
converter::converter(std::string str) : _ogString(str)
{
	return ;
}
converter::~converter(void)
{
	return ;
}
converter::converter(converter const & src)
{
	*this = src;
}
converter		&converter::operator=(converter const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

converter::operator char(void)
{
	return (static_cast<int>(std::stoi(_ogString)));
}

converter::operator int(void)
{
	return (static_cast<int>(std::stoi(_ogString)));
}

converter::operator float(void)
{
	return (static_cast<float>(std::stof(_ogString)));
}

converter::operator double(void)
{
	return (static_cast<double>(std::stod(_ogString)));
}


const char *converter::badConvertException::what(void) const throw()
{
	return ("Form Score is too high");
}
