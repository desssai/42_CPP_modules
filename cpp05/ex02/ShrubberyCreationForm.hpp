/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:30:49 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/22 14:34:05 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include "Form.hpp"
# include <fstream>

# define SB_FORM_NAME "ShrubberyCreationForm"

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	virtual ~ShrubberyCreationForm(void);

	ShrubberyCreationForm& operator = (ShrubberyCreationForm const &copy);
	
	virtual void	execute(Bureaucrat const &executor) const;

	class FileOpenFailException : public std::exception {
		public:
			virtual const char* what() const throw();
	};

private:
	std::string const _target;

};

#endif /* SHRUBBERYCREATIONFORM_H */