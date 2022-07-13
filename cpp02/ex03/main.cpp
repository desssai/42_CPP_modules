/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:34:51 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 01:00:11 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

/* P[0] IS THE SAME AS A VERTEX */
/* P[1] IS OUTSIDE OF THE TRIANGLE */
/* P[2] IS ON THE SAME LINE AS VECTOR AB */
/* P[3] IS INSIDE THE TRIANGLE */

int main(void) {
	Point const A(10, 10);
	Point const B(1.f, 1.f);
	Point const C(10.f, 1.f);
	Point const P[4] = {Point(10,10), Point(0,0), Point(5,5), Point(5, 4)};

	for (int i = 0; i < 4; ++i) {
		std::cout << "point [" << i << "] " << bsp(A, B, C, P[i]) << std::endl;
	}
	return (0);
}