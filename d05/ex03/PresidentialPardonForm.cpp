/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:34:20 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 22:26:57 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5) , _target("test")
{
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25 , 5), _target(target)
{
	return ;
}
PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	*this = src;
}
PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

void 	PresidentialPardonForm::doSomeThing( void ) 
{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}