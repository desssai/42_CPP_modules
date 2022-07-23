/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:59:04 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/22 14:29:11 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form(PR_FORM_NAME, 25, 5), _target("no_target") {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(PR_FORM_NAME, 25, 5), _target(target) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(PR_FORM_NAME, 25, 5), _target(copy._target) {
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator = (PresidentialPardonForm const &copy) {
	Form::operator=(copy);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!getSignedStatus())
		throw (Form::NotSignedException());
	else if (executor.getGrade() > getToExecGrade())
		throw (Bureaucrat::GradeTooLowException());
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}