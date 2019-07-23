/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 22:38:22 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 23:23:21 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
#include "Form.hpp"

class Intern
{
public:
	Intern(void);
	~Intern(void);
	Intern(Intern const &src);
	Intern &operator=(Intern const &rhs);

	struct badFileException : public std::exception
	{
		const char *what(void) const throw();
	};
	Form *makeForm(std::string form_name, std::string target);
	//Add your public methods below here
private:
	//Add your private methods

	//Add your private attributes below here
};

#endif
