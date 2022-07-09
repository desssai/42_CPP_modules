/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:28:59 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/09 14:05:04 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

void Contact::ft_get_string(std::string const message, std::string &answer) {
	std::string temp;

	while (true) {
		std::cout << message;
		getline(std::cin, temp);
		if (temp.length()) {
			answer = temp;
			break ;
		}
		else
			std::cout << "INCORRECT INPUT. TRY AGAIN." << std::endl;
	}
}

int Contact::ft_check_number(std::string value) const {
	int	i = -1;

	while (value[++i])
		if (!isdigit(value[i])) 
			return (1);
	if (i != 11)
		return (1);
	return (0);
}

void Contact::ft_get_number(std::string const message, std::string &answer) {

	std::string temp;

	while (true) {
		std::cout << message;
		getline(std::cin, temp);
		if (!this->ft_check_number(temp)) {
			answer = temp;
			break ;
		}
		else
			std::cout << "INCORRECT NUMBER. TRY AGAIN." << std::endl;
	}
}

std::string	Contact::get_nickname(void) const {
	return (this->_nick_name);
}

std::string	Contact::get_firstname(void) const {
	return (this->_first_name);
}

std::string	Contact::get_lastname(void) const {
	return (this->_last_name);
}

void Contact::fill_info(void) {
	this->ft_get_string("Please tell me your first name: ", this->_first_name);
	this->ft_get_string("Please tell me your last name: ", this->_last_name);
	this->ft_get_string("Please tell me your nickname: ", this->_nick_name);
	this->ft_get_number("Please tell me your phone number: ", this->_phone_number);
	this->ft_get_string("Please tell me your darkest secret: ", this->_darkest_secret);
}

void Contact::display_info(void) const {
	std::cout << "Contacts' first name is: " << this->_first_name << std::endl;
	std::cout << "Contacts' last name is: " << this->_last_name << std::endl;
	std::cout << "Contacts' nickname is: " << this->_nick_name << std::endl;
	std::cout << "Contacts' number is: " << this->_phone_number << std::endl;
	std::cout << "Contacts' secret is: " << this->_darkest_secret << std::endl;
}

Contact::~Contact(void) {
	return ;
}
