/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:20:01 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 22:33:16 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>
#include "Form.hpp"
#define MAX_SCORE 1
#define MIN_SCORE 150

class Form;

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(int grade, std::string name);
	~Bureaucrat(void);
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &rhs);

	void executeForm(Form const & form);
	void	signForm(Form &f);
	void upGrade();
	void downGrade();
	int getGrade() const;
	std::string getName() const;
	struct GradeTooHighException : public std::exception
	{
		const char *what(void) const throw();
	};
	struct GradeTooLowException : public std::exception
	{
		const char *what(void) const throw();
	};
	//Add your public methods below here
private:
	//Add your private methods
	std::string _name;
	int _grade;

	//Add your private attributes below here
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);
#endif
