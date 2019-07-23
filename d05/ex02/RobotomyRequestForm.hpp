/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncollie <ncollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:34:08 by ncollie           #+#    #+#             */
/*   Updated: 2019/07/22 22:17:12 by ncollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
		public:
			RobotomyRequestForm(void);
			RobotomyRequestForm(std::string target);
			~RobotomyRequestForm(void);
			RobotomyRequestForm(RobotomyRequestForm const & src);
			RobotomyRequestForm &operator=(RobotomyRequestForm const & rhs);

			void doSomeThing(void);
			//Add your public methods below here
		private:
			//Add your private methods
			std::string		_target;
			//Add your private attributes below here

};

#endif
