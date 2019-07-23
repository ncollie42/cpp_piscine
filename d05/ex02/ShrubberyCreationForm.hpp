/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:33:46 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 22:15:22 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
		public:
			ShrubberyCreationForm(void);
			ShrubberyCreationForm(std::string target);
			~ShrubberyCreationForm(void);
			ShrubberyCreationForm(ShrubberyCreationForm const & src);
			ShrubberyCreationForm &operator=(ShrubberyCreationForm const & rhs);

			void doSomeThing(void);
			//Add your public methods below here
		private:
			//Add your private methods
			std::string		_target;
			//Add your private attributes below here

};

#endif
