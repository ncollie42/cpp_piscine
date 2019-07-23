/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:34:20 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 22:24:04 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
		public:
			PresidentialPardonForm(void);
			PresidentialPardonForm(std::string target);
			~PresidentialPardonForm(void);
			PresidentialPardonForm(PresidentialPardonForm const & src);
			PresidentialPardonForm &operator=(PresidentialPardonForm const & rhs);
			//Add your public methods below here

			void doSomeThing(void);
		private:
			//Add your private methods
			std::string		_target;
			//Add your private attributes below here

};

#endif
