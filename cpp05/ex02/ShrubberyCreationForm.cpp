/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 23:33:24 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/22 14:35:22 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form(SB_FORM_NAME, 145, 137), _target("no_target") {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(SB_FORM_NAME, 145, 137), _target(target) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(SB_FORM_NAME, 145, 137), _target(copy._target) {
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (ShrubberyCreationForm const &copy) {
	Form::operator=(copy);
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	std::ofstream out;
	
	
	if (!getSignedStatus())
		throw (Form::NotSignedException());
	else if (executor.getGrade() > getToExecGrade())
		throw (Bureaucrat::GradeTooLowException());
	out.open(_target + "_shrubbery", std::fstream::out | std::fstream::app);
	if (!out.is_open() || out.bad())
		throw (ShrubberyCreationForm::FileOpenFailException());
	else {
		for (int i = 0; i < 3; ++i) {
			out << "ASCII TREES" << std::endl;
		}
		out.close();
	}
}

const char* ShrubberyCreationForm::FileOpenFailException::what() const throw() {
	return "ShrubberyCreationFormException: Error occured opening the file";
}