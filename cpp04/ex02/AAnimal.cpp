/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:39 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 20:18:00 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) {
	this->ptype = "just an AAnimal";
	std::cout << "Default constructor for AAnimal called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & origin) {
	std::cout << "Copy constructor for AAnimal called" << std::endl;
	this->ptype = origin.ptype;
}

AAnimal & AAnimal::operator = (AAnimal const & origin) {
	std::cout << "Copy operator for AAnimal called" << std::endl;
	if (this != &origin)
		this->ptype = origin.ptype;
	return (*this);
}

void AAnimal::makeSound(void) const {
	std::cout << "* weird AAnimal noises *" << std::endl;
}

std::string const AAnimal::getType(void) const {
	return (this->ptype);
}

AAnimal::~AAnimal(void) {
	std::cout << "Destructor for AAnimal called" << std::endl;
}
