/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:31:33 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/12 23:11:39 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _int(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) : _int(src.getRawBits()) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int num) : _int(num * 256) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _int(roundf(num * 256)) {
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_int;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "Copy constructor called" << std::endl;
	this->_int = raw;
}

float Fixed::toFloat(void) const {
	float val = this->_int / 256.f;
	return (val);
}

int Fixed::toInt(void) const {
	return int(this->_int / 256);
}

Fixed& Fixed::operator=(Fixed const & src) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_int = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream & o, Fixed const & fx) {
	o << fx.toFloat();
	return (o);
}