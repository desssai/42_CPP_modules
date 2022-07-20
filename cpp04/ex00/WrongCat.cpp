/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:57:58 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 17:20:57 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->ptype = "WrongCat";
	std::cout << "Default constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & origin) {
	std::cout << "Copy constructor for WrongCat called" << std::endl;
	this->ptype = origin.ptype;
}

WrongCat & WrongCat::operator = (WrongCat const & origin) {
	std::cout << "Copy operator for WrongCat called" << std::endl;
	if (this != &origin)
		this->ptype = origin.ptype;
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "* bark meow baew *" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "Destructor for WrongCat called" << std::endl;
}
