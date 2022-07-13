/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:21:35 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/13 16:11:23 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

#include "Fixed.hpp"

class Point {

public:

	Fixed const	getXValue(void) const;
	Fixed const	getYValue(void) const;

	Point(void);
	Point(float const x, float const y);
	Point(Point const & other);
	~Point(void);

	Point &	operator = (Point const & other);
	Point	operator - (Point const & other) const;
	Point	operator + (Point const & other) const;
	Point	operator * (Point const & other) const;

private:
	Fixed	const _x;
	Fixed	const _y;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
