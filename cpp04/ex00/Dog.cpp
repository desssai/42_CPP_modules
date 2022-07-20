/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:50 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 16:38:19 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(void) {
	this->ptype = "Dog";
	std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog(Dog const & origin) {
	std::cout << "Copy constructor for Dog called" << std::endl;
	this->ptype = origin.ptype;
}

Dog & Dog::operator = (Dog const & origin) {
	std::cout << "Copy operator for Dog called" << std::endl;
	if (this != &origin)
		this->ptype = origin.ptype;
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "* bark bark bark *" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Destructor for Dog called" << std::endl;
}
