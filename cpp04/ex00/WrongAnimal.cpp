/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:57:35 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 16:58:32 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	this->ptype = "just an WrongAnimal";
	std::cout << "Default constructor for WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & origin) {
	std::cout << "Copy constructor for WrongAnimal called" << std::endl;
	this->ptype = origin.ptype;
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal const & origin) {
	std::cout << "Copy operator for WrongAnimal called" << std::endl;
	if (this != &origin)
		this->ptype = origin.ptype;
	return (*this);
}

void WrongAnimal::makeSound(void) const {
	std::cout << "* weird WrongAnimal noises *" << std::endl;
}

std::string const WrongAnimal::getType(void) const {
	return (this->ptype);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Destructor for WrongAnimal called" << std::endl;
}
