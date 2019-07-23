/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:42:55 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 21:52:45 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form(void);
	Form(std::string name, int sign, int exec);
	~Form(void);
	Form(Form const &src);
	Form &operator=(Form const &rhs);

	void beSigned(Bureaucrat & b);
	struct GradeTooHighException : public std::exception
	{
		const char *what(void) const throw();
	};
	struct GradeTooLowException : public std::exception
	{
		const char *what(void) const throw();
	};
	struct NotSignedException : public std::exception
	{
		const char *what(void) const throw();
	};
	
	virtual void 				doSomeThing( void ) = 0;
	void 						execute(Bureaucrat const & executor);
	void						setSigned(bool value);
	std::string					getName() const;
	bool						getSigned() const;
	int							getRecSign() const;
	int							getRecExec() const;
	//Add your public methods below here
private:
	//Add your private methods
	const std::string 			_name;
	bool 						_signed;
	const int					_reGrade_sign;  //constraint
	const int					_reGrade_execute;

	//Add your private attributes below here
};
std::ostream &operator<<(std::ostream &out, const Form &rhs);
#endif
