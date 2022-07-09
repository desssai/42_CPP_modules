/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:27:38 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/09 14:05:37 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {

private:

	Contact Contacts[8];
	unsigned int _index;
	unsigned int _number;

	void ft_const_loop(void);
	void ft_add_contact(void);
	void ft_search_contact(void) const;

public:

	PhoneBook(/* args */);
	~PhoneBook();

};

#endif
