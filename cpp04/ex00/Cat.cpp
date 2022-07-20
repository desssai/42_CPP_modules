/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:46 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 16:38:46 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	this->ptype = "Cat";
	std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat(Cat const & origin) {
	std::cout << "Copy constructor for Cat called" << std::endl;
	this->ptype = origin.ptype;
}

Cat & Cat::operator = (Cat const & origin) {
	std::cout << "Copy operator for Cat called" << std::endl;
	if (this != &origin)
		this->ptype = origin.ptype;
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "* meow meow meow *" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Destructor for Cat called" << std::endl;
}
