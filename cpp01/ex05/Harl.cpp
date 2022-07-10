/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 01:30:22 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/11 02:22:02 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return ;
}

void	Harl::complain(std::string const level) const {
	std::string array[4];
	void (Harl::*func_array[4])(void) const;
	
	array[0] = "DEBUG";
	array[1] = "INFO";
	array[2] = "WARNING";
	array[3] = "ERROR";

	func_array[0] = &Harl::debug;
	func_array[1] = &Harl::info;
	func_array[2] = &Harl::warning;
	func_array[3] = &Harl::error;

	for (unsigned int i = 0; i < 4; ++i) {
		if (level == array[i])
			(this->*func_array[i])();
	}
}

void	Harl::debug(void) const {
	std::cout << DEBUG_STR << std::endl;
}

void	Harl::info(void) const {
	std::cout << INFO_STR << std::endl;
}

void	Harl::warning(void) const {
	std::cout << WARNING_STR << std::endl;
}

void	Harl::error(void) const {
	std::cout << ERROR_STR << std::endl;
}

Harl::~Harl() {
	return ;
}
