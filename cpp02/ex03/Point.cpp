/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:21:38 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/13 16:01:21 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
	return ;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {
	return ;
}

Point::Point(Point const & other) : _x(other.getXValue()), _y(other.getYValue()) {
	return ;
}

Fixed const Point::getXValue(void) const {
	return (this->_x);
}

Fixed const Point::getYValue(void) const {
	return (this->_y);	
}

Point & Point::operator = (Point const & other) {
	if (this != &other)
		*this = other;
	return (*this);
}

Point Point::operator - (Point const & other) const {
	return (Point(this->_x.toFloat() - other.getXValue().toFloat(), this->_y.toFloat() - other.getYValue().toFloat()));
}

Point Point::operator * (Point const & other) const {
	return (Point(this->_x.toFloat() * other.getXValue().toFloat(), this->_y.toFloat() * other.getYValue().toFloat()));
}

Point Point::operator + (Point const & other) const {
	return (Point(this->_x.toFloat() + other.getXValue().toFloat(), this->_y.toFloat() + other.getYValue().toFloat()));
}

Point::~Point(void) {
	return ;
}
