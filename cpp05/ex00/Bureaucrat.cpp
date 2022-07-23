/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:33:39 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/22 14:16:24 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("noname"), _grade(150) {
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());	
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & origin) : _name(origin._name) {
	*this = origin;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

std::string const &	Bureaucrat::getName(void) const {
	return (_name);	
}

int	Bureaucrat::getGrade(void) const {
	return (_grade);
}

Bureaucrat &	Bureaucrat::operator = (Bureaucrat const & origin) {
	if (this != &origin)
		_grade = origin._grade;
	return (*this);
}

Bureaucrat		Bureaucrat::operator ++ (void) {
	--_grade;
	if (_grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	return (*this);
}

Bureaucrat		Bureaucrat::operator -- (void) {
	++_grade;
	if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	return (*this);
}

std::ostream & operator << (std::ostream & o, Bureaucrat const & origin) {
	o << origin.getName() << ", bureaucrat grade " << origin.getGrade();
	return (o);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "BureaucratException: Grade too Low";
}