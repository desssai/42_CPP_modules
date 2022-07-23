/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:53:20 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/23 15:30:13 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	return ;
}

Intern::Intern(Intern const &copy) {
	(void)copy;
	return ;
}

Intern::~Intern(void) {
	return ;
}

Intern& Intern::operator = (Intern const &copy) {
	(void)copy;
	return (*this);
}

Form*	Intern::makePresidentialPardon(std::string const target) {
	Form *ptr = new PresidentialPardonForm(target);
	return (ptr);
}

Form*	Intern::makeRobotomyRequest(std::string const target) {
	Form *ptr = new RobotomyRequestForm(target);
	return (ptr);
}

Form*	Intern::makeShrubberyCreation(std::string const target) {
	Form *ptr = new ShrubberyCreationForm(target);
	return (ptr);
}

Form* Intern::makeForm(std::string name, std::string target) {
	std::string	forms[3] = {"request", "pardon", "creation"};
	Form* (Intern::*blankforms[3])(std::string) = {
		&Intern::makeRobotomyRequest,
		&Intern::makePresidentialPardon,
		&Intern::makeShrubberyCreation
	};
	int			correct[3] = {0, 0, 0};

	for (int i = 0; i < 3; i++) {
		if (name.find(forms[i], 0) != std::string::npos)
			correct[i]++;
	}
	if (correct[0] + correct[1] + correct[2] != 1) {
		std::cout << "InternError: Couldn't catch form name." << std::endl;
		return (NULL);
	}
	for (int i = 0; i < 3; i++) {
		if (correct[i])
			return ((this->*blankforms[i])(target));
	}
	return (NULL);
}
