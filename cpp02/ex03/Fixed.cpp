/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:31:33 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/13 15:38:09 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_bits = 8;

Fixed::Fixed(void) : _int(0) {
	return ;
}

Fixed::Fixed(Fixed const & other) : _int(other.getRawBits()) {
	return ;
}

Fixed::Fixed(const int num) : _int(num * 256) {
	return ;
}

Fixed::Fixed(const float num) : _int(roundf(num * 256)) {
	return ;
}

int Fixed::getRawBits(void) const {
	return this->_int;
}

void Fixed::setRawBits(int const raw) {
	this->_int = raw;
}

float Fixed::toFloat(void) const {
	float val = this->_int / 256.f;
	return (val);
}

int Fixed::toInt(void) const {
	return int(this->_int / 256);
}

Fixed& Fixed::operator = (Fixed const & other) {
	if (this != &other)
		this->_int = other.getRawBits();
	return (*this);
}

bool Fixed::operator < (Fixed const & other) const {
	if (this->getRawBits() < other.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator <= (Fixed const & other) const {
	if (this->getRawBits() <= other.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator > (Fixed const & other) const {
	if (this->getRawBits() > other.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator >= (Fixed const & other) const {
	if (this->getRawBits() >= other.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator == (Fixed const & other) const {
	if (this->getRawBits() == other.getRawBits())
		return (1);
	return (0);
}

bool Fixed::operator != (Fixed const & other) const {
	if (this->getRawBits() != other.getRawBits())
		return (1);
	return (0);
}

Fixed Fixed::operator + (Fixed const & other) const {
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator - (Fixed const & other) const {
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator * (Fixed const & other) const {
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator / (Fixed const & other) const {
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed	Fixed::operator ++ (void) {
	Fixed res;
	
	res.setRawBits(++this->_int);
	return (res);
}

Fixed	Fixed::operator ++ (int num) {
	Fixed res;
	
	res.setRawBits(this->_int++);
	return (res);
}

Fixed	Fixed::operator -- (void) {
	Fixed res;
	
	res.setRawBits(--this->_int);
	return (res);
}

Fixed	Fixed::operator -- (int num) {
	Fixed res;
	
	res.setRawBits(this->_int--);
	return (res);
}


Fixed::~Fixed(void) {
	return ;
}

Fixed& Fixed::min(Fixed & a, Fixed & b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::min(Fixed const & a, Fixed const & b) {
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed & a, Fixed & b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

const Fixed& Fixed::max(Fixed const & a, Fixed const & b) {
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

std::ostream& operator << (std::ostream & o, Fixed const & fx) {
	o << fx.toFloat();
	return (o);
}
