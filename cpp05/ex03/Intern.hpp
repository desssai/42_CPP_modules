/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:06:27 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/23 15:20:19 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_h
# define INTERN_h

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <iostream>

class Intern {

public:
	Intern(void);
	Intern(Intern const &copy);
	~Intern(void);

	Intern& operator = (Intern const &copy);

	Form*	makeForm(std::string const name, std::string const target);

private:
	Form*	makePresidentialPardon(std::string const target);
	Form*	makeRobotomyRequest(std::string const target);
	Form*	makeShrubberyCreation(std::string const target);

};

#endif