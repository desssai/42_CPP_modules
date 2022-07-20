/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:46 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 20:06:56 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Default constructor for Cat called" << std::endl;
	this->ptype = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(std::string const thought) {
	std::cout << "Normal constructor for Cat called" << std::endl;
	this->_brain = new Brain();
	this->_brain->setIdeas(thought);
}

Cat::Cat(Cat const & origin) {
	std::cout << "Copy constructor for Cat called" << std::endl;
	*this = origin;
}

Cat & Cat::operator = (Cat const & origin) {
	std::cout << "Copy operator for Cat called" << std::endl;
	if (this != &origin) {
		this->_brain = new Brain();
		this->ptype = origin.ptype;
		*(this->_brain) = *(origin._brain);
	}
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "* meow meow meow *" << std::endl;
}

Brain*	Cat::getBrain(void) const {
	return (this->_brain);
}

Cat::~Cat(void) {
	std::cout << "Destructor for Cat called" << std::endl;
	delete this->_brain;
}
