/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:55:23 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/21 19:28:09 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("blank"), _signed(false), _to_sign_grade(150), _to_exec_grade(150) {
	return ;
}

Form::Form(std::string const &name, int grade1, int grade2) :
		_name(name), _signed(false), _to_sign_grade(grade1), _to_exec_grade(grade2) {
	if (grade1 > 150 || grade2 > 150)
		throw Form::GradeTooLowException();
	else if (grade1 < 1 || grade2 < 1)
		throw Form::GradeTooHighException();
}

Form::Form(Form const &origin) : _name(origin._name), _to_sign_grade(origin._to_sign_grade), _to_exec_grade(origin._to_exec_grade) {
	*this = origin;
}

Form::~Form(void) {
	return ;
}

Form & Form::operator = (Form const &origin) {
	if (this != &origin)
		_signed = origin._signed;
	return (*this);
}

std::string const & Form::getName(void) const {
	return (_name);
}

int Form::getToSignGrade(void) const {
	return (_to_sign_grade);
}

int Form::getToExecGrade(void) const {
	return (_to_exec_grade);
}

bool Form::getSignedStatus(void) const {
	return (_signed);
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (_signed)
		throw (Form::AlreadySignedException());
	else if (bureaucrat.getGrade() > _to_sign_grade)
		throw (Form::GradeTooLowException());
	else
		_signed = true;
}

std::ostream & operator << (std::ostream &o, Form const &origin) {
	o << origin.getName() << ", form with grade " << origin.getToSignGrade() << " to sign and grade " << origin.getToExecGrade() << " to execute. Signed: " << origin.getSignedStatus();
	return (o);
}

const char* Form::GradeTooHighException::what() const throw() {
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "FormException: Grade too Low";
}

const char* Form::AlreadySignedException::what() const throw() {
	return "FormException: Form has already been signed";
}