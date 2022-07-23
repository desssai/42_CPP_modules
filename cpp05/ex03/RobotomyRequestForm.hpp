/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:26:29 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/22 14:25:50 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include "Form.hpp"
# define RT_FORM_NAME "RobotomyRequestForm"

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm& operator = (RobotomyRequestForm const &copy);
	
	virtual void	execute(Bureaucrat const &executor) const;

private:
	std::string const _target;

};

#endif /* ROBOTOMYREQUESTFORM_H */