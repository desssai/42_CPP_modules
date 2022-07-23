/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:24:27 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/22 14:22:15 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form(RT_FORM_NAME, 72, 45), _target("no_target") {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(RT_FORM_NAME, 72, 45), _target(target) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(RT_FORM_NAME, 72, 45), _target(copy._target) {
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator = (RobotomyRequestForm const &copy) {
	Form::operator=(copy);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (!getSignedStatus())
		throw (Form::NotSignedException());
	else if (executor.getGrade() > getToExecGrade())
		throw (Bureaucrat::GradeTooLowException());
	else {
		std::cout << " * some weird drilling noises * " << std::endl;
		if (std::rand() % 2)
			std::cout << _target << " has been robotomized" << std::endl;
		else
			std::cout << _target << " robotomy failed..." << std::endl;
	}
}