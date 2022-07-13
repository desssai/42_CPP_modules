/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:35:38 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 00:49:35 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	getTriangleArea(Point p1, Point p2, Point p3) {
	
	return (((p1.getXValue() - p3.getXValue()).toFloat() * (p2.getYValue() - p3.getYValue()).toFloat() - (p2.getXValue() - p3.getXValue()).toFloat() * (p1.getYValue() - p3.getYValue()).toFloat()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	
	float BigTriangle, SmallTriangle1, SmallTriangle2, SmallTriangle3;

	BigTriangle = getTriangleArea(a, b, c);
    SmallTriangle1 = getTriangleArea(a, b, point);
	if (SmallTriangle1 < 0)
		SmallTriangle1 *= -1;
	else if (!SmallTriangle1)
		return (false);
    SmallTriangle2 = getTriangleArea(b, c, point);
	if (SmallTriangle2 < 0)
		SmallTriangle2 *= -1;
	else if (!SmallTriangle2)
		return (false);
    SmallTriangle3 = getTriangleArea(a, c, point);
	if (SmallTriangle3 < 0)
		SmallTriangle3 *= -1;
	else if (!SmallTriangle3)
		return (false);
	if (BigTriangle == SmallTriangle1 + SmallTriangle2 + SmallTriangle3)
		return (true);
	return (false);
}
