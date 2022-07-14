/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:25:54 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 15:51:42 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact {

private:

	std::string _first_name;
	std::string _last_name;
	std::string _nick_name;
	std::string _phone_number;
	std::string _darkest_secret;
	
	void	ft_get_string(std::string const message, std::string &answer);
	void	ft_get_number(std::string const message, std::string &answer);
	int		ft_check_number(std::string value) const;

public:

	Contact(void);
	~Contact(void);

	void	fill_info(void);
	void	display_info(void) const;
	
	std::string	get_firstname(void) const;
	std::string	get_lastname(void) const;
	std::string	get_nickname(void) const;
};

#endif
