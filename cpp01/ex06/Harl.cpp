/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 01:30:22 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/12 17:57:18 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return ;
}

void	Harl::complain(std::string const level) const {
	const std::string array[]  = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func_array[4])(void) const;
	unsigned int value = -1;

	func_array[0] = &Harl::debug;
	func_array[1] = &Harl::info;
	func_array[2] = &Harl::warning;
	func_array[3] = &Harl::error;

	while (++value < 4) {
		if (level == array[value])
			break ;
	}

	switch (value) {
		case 0:
			(this->*func_array[0])();
		case 1:
			(this->*func_array[1])();
		case 2:
			(this->*func_array[2])();
		case 3:
			(this->*func_array[3])();
			break ;
		default:
			std::cout << COMPLAIN_STR << std::endl;
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
