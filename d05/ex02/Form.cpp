/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:42:55 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 21:53:59 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
Form::Form(void) : _name("default"), _signed(false), _reGrade_sign(150), _reGrade_execute(150)
{
	return;
}

Form::Form(std::string name, int sign, int exec) : _name(name), _signed(false), _reGrade_sign(sign), _reGrade_execute(exec)
{
	if (sign > MIN_SCORE)
		throw Form::GradeTooLowException();
	if (sign < MAX_SCORE)
		throw Form::GradeTooHighException();
	if (exec > MIN_SCORE)
		throw Form::GradeTooLowException();
	if (exec < MAX_SCORE)
		throw Form::GradeTooHighException();
	return;
}

Form::~Form(void)
{
	return;
}

Form::Form(Form const &src) : _name(src._name), _signed(src._signed), _reGrade_sign(src._reGrade_sign), _reGrade_execute(src._reGrade_execute)
{
	*this = src;
}

Form &Form::operator=(Form const &rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const &rhs)
{
	out << "Form: '" << rhs.getName() << "'\nRequirement to Sign: " << rhs.getRecSign() << "\nRequirement to execute: " << rhs.getRecExec()
	<< "\nsigned? " << ((rhs.getSigned()) ? "yes" : "no");
	return out;
}

std::string Form::getName() const
{
	return _name;
}
bool Form::getSigned() const
{
	return _signed;
}
int Form::getRecSign() const
{
	return _reGrade_sign;
}
int Form::getRecExec() const
{
	return _reGrade_execute;
}
void 	Form::setSigned(bool value)
{
	_signed = value;
}


const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Form Score is too high");
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Form Score is too low");
}
const char *Form::NotSignedException::what(void) const throw()
{
	return ("Cant' execute: Form is not signed");
}

void	Form::beSigned(Bureaucrat & b)
{
	if (b.getGrade() > _reGrade_sign)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}


// void 	ShrubberyCreationForm::doSomeThing( void ) const
// {}

void 	Form::execute(Bureaucrat const & executor)
{
	if (!_signed)
		throw Form::NotSignedException();
	if (executor.getGrade() > _reGrade_execute)
	{
		std::cout << "cant execute: ";
		throw Form::GradeTooLowException(); 
	}
	doSomeThing();
}