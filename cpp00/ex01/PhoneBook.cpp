/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:28:56 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 15:51:37 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _index(0), _number(0) {
	this->ft_const_loop();
}

void PhoneBook::ft_add_contact(void) {
	this->Contacts[this->_number].fill_info();
	this->_number == 7 ? this->_number = 0 : ++this->_number;
	++this->_index;
}

static void ft_print_trunctated(std::string value) {
	unsigned int i = -1;
	unsigned int j = -1;

	while (++i + value.length() < 10)
		std::cout << ' ';
	while (++j + i < 9)
		std::cout << value[j];
	value[j + 1] ? std::cout << '.' : std::cout << value[j];
}

void PhoneBook::ft_search_contact(void) const {
	std::string answer;

	if (!this->_index) {
		std::cout << "PLEASE ADD SOME CONTACTS FIRST." << std::endl;
		return ;
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|---|FIRST NAME|LAST  NAME|NICK  NAME|" << std::endl;
	std::cout << "|---|----------|----------|----------|" << std::endl;
	for (unsigned int i = 0; i < 8; i++) {
		std::cout << "| " << i + 1 << ".|";
		ft_print_trunctated(this->Contacts[i].get_firstname());
		std::cout << "|";
		ft_print_trunctated(this->Contacts[i].get_lastname());
		std::cout << "|";
		ft_print_trunctated(this->Contacts[i].get_nickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	while (true) {
		std::cout << "CHOOSE AN INDEX: ";
		getline(std::cin, answer);
		if (answer[0] && !answer[1] && answer[0] > 48 && answer[0] < 57 && answer[0] - 48 <= this->_index)
			break ;
		std::cout << "INCORRECT. INDEX OUT OF RANGE. TRY AGAIN." << std::endl;
	}
	this->Contacts[answer[0] - 49].display_info();
}

void PhoneBook::ft_const_loop(void) {
	std::string str1;

	while (true) {
		std::cout << "INPUT COMMAND: ";
		getline(std::cin, str1);
		if (!str1.compare("EXIT"))
			break ;
		else if (!str1.compare("ADD"))
			this->ft_add_contact();
		else if (!str1.compare("SEARCH"))
			this->ft_search_contact();
		else
			std::cout << "INCORRECT COMMAND. TRY AGAIN." << std::endl;
	}
}

PhoneBook::~PhoneBook(void) {
	return ;
}
