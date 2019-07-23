/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:33:46 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 22:12:57 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>  

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137) , _target("test")
{
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src)
{
	*this = src;
}
ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

void 	ShrubberyCreationForm::doSomeThing( void ) 
{
	char tree[] = "\
	       ###\n\
	      #o###\n \
	    #####o###\n\
	   #o#]#|#/###\n \
        ###]|/#o#\n \
         # }|{  #\n \
          }|{ \
	";


	std::ofstream outfile (_target + "_shrubbery");
	outfile << tree << std::endl;
	outfile.close();
}