/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:20:00 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 23:24:44 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return;
}

Bureaucrat::Bureaucrat(int grade, std::string name)
{
	if (grade > MIN_SCORE)
		throw Bureaucrat::GradeTooLowException();
	if (grade < MAX_SCORE)
		throw Bureaucrat::GradeTooHighException();
	_grade = grade;
	_name = name;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this == &rhs)
		return (*this);
	_grade = 12;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
	std::string tmp = " Bureaucrat grade ";

	out << rhs.getName() << tmp.c_str() << rhs.getGrade();
	return out;
}

void Bureaucrat::upGrade()
{
	if ((_grade - 1) < MAX_SCORE)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::downGrade()
{
	if ((_grade + 1) > MIN_SCORE)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Bureaucrat Score is too high");
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Bureaucrat Score is too low");
}

void Bureaucrat::signForm(Form &f)
{
	if (f.getRecSign() > _grade)
	{
		std::cout << "<bureaucrat> " << _name << " signs <form> " << f.getName() << std::endl;
		f.setSigned(true);
	}
	else
		std::cout << "<bureaucrat> " << _name << " Cannot sign <form> " << f.getName() << "<reason> Not low enough level" << std::endl;
}

void Bureaucrat::executeForm(Form const &form)
{
	if (form.getSigned() && form.getRecExec() > _grade)
	{
		std::cout << "<bureaucrat> " << _name << " executes <form> " << form.getName() << std::endl;
	}
	else
		std::cout << "<bureaucrat> " << _name << " Cannot sign <form> " << form.getName() << " <reason> Not low enough level" << std::endl;
}