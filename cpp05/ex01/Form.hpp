/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:42:58 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/21 19:27:03 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include "Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form {

public:
	Form(void);
	Form(std::string const &name, int grade1, int grade2);
	Form(Form const &origin);
	~Form(void);

	std::string const	&getName(void) const;
	int 				getToSignGrade(void) const;
	int 				getToExecGrade(void) const;
	bool				getSignedStatus(void) const;
	void				beSigned(Bureaucrat &bureaucrat);

	Form& operator = (Form const &origin);

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

	class AlreadySignedException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:
	std::string const	_name;
	bool				_signed;
	int const	_to_sign_grade;
	int const	_to_exec_grade;

};

std::ostream & operator << (std::ostream &o, Form const &origin);

#endif