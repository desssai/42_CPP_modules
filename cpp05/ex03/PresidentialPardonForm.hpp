/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:56:59 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/22 14:34:34 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include "Form.hpp"
# define PR_FORM_NAME "PresidentialPardonForm"

class PresidentialPardonForm : public Form {

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm& operator = (PresidentialPardonForm const &copy);
	
	virtual void	execute(Bureaucrat const &executor) const;

private:
	std::string const _target;

};

#endif /* PRESIDENTIALPARDONFORM_H */