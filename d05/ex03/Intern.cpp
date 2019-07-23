/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 22:38:22 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 23:24:05 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	return;
}
Intern::~Intern(void)
{
	return;
}
Intern::Intern(Intern const &src)
{
	*this = src;
}
Intern &Intern::operator=(Intern const &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

const char *Intern::badFileException::what(void) const throw()
{
	return ("File doesn't exisit");
}

Form *Intern::makeForm(std::string form_name, std::string target)
{
	if (!form_name.compare("ShrubberyCreationForm"))
	{
		std::cout << "Intern create <form>" << std::endl;
		return new ShrubberyCreationForm(target); 
	}
	else if (!form_name.compare("RobotomyRequestForm"))
	{
		std::cout << "Intern create <form>" << std::endl;
		return new RobotomyRequestForm(target); 
	}
	else if (!form_name.compare("PresidentialPardonForm"))
	{
		std::cout << "Intern create <form>" << std::endl;
		return new PresidentialPardonForm(target); 
	}
	else
		throw badFileException();
}