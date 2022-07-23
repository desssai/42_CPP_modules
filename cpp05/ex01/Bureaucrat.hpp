/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:32:27 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/21 19:26:58 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include "Form.hpp"
# include <stdexcept>
# include <iostream>
# include <string>

class Form;

class Bureaucrat {

public:
	Bureaucrat(void);
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &origin);
	~Bureaucrat(void);

	std::string const &	getName(void) const;
	int					getGrade(void) const;
	void				signForm(Form &form);

	Bureaucrat &	operator = (Bureaucrat const &origin);
	Bureaucrat		operator ++ (void);
	Bureaucrat		operator -- (void);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:
	std::string const	_name;
	int 		_grade;

};

std::ostream & operator << (std::ostream & o, Bureaucrat const &origin);

#endif