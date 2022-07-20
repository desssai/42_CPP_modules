/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:39 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 16:51:12 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	this->ptype = "just an Animal";
	std::cout << "Default constructor for Animal called" << std::endl;
}

Animal::Animal(Animal const & origin) {
	std::cout << "Copy constructor for Animal called" << std::endl;
	this->ptype = origin.ptype;
}

Animal & Animal::operator = (Animal const & origin) {
	std::cout << "Copy operator for Animal called" << std::endl;
	if (this != &origin)
		this->ptype = origin.ptype;
	return (*this);
}

void Animal::makeSound(void) const {
	std::cout << "* weird animal noises *" << std::endl;
}

std::string const Animal::getType(void) const {
	return (this->ptype);
}

Animal::~Animal(void) {
	std::cout << "Destructor for Animal called" << std::endl;
}
