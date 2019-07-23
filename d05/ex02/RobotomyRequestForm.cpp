/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:34:08 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 22:25:46 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), _target("null")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}
RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	*this = src;
}
RobotomyRequestForm		&RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}


void 	RobotomyRequestForm::doSomeThing( void ) 
{
	if (rand() % 2)
		std::cout << "drrrrrrrrrr " << _target << "has be robotomized"	 << std::endl;
	else
		std::cout << "Failer to romotomize" << std::endl;
}