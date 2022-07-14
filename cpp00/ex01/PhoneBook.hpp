/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:27:38 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 15:51:33 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook(/* args */);
	~PhoneBook();

private:

	Contact	Contacts[8];
	int		_index;
	int		_number;

	void	ft_const_loop(void);
	void	ft_add_contact(void);
	void	ft_search_contact(void) const;

};

#endif
