/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:50 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 20:14:52 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << "Default constructor for Dog called" << std::endl;
	this->ptype = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(std::string const thought) {
	std::cout << "Normal constructor for Dog called" << std::endl;
	this->_brain = new Brain();
	this->_brain->setIdeas(thought);
}

Dog::Dog(Dog const & origin) {
	std::cout << "Copy constructor for Dog called" << std::endl;
	*this = origin;
}

Dog & Dog::operator = (Dog const & origin) {
	std::cout << "Copy operator for Dog called" << std::endl;
	if (this != &origin) {
		this->_brain = new Brain();
		this->ptype = origin.ptype;
		*(this->_brain) = *(origin._brain);
	}
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "* meow meow meow *" << std::endl;
}

Brain*	Dog::getBrain(void) const {
	return (this->_brain);
}

Dog::~Dog(void) {
	std::cout << "Destructor for Dog called" << std::endl;
	delete this->_brain;
}
