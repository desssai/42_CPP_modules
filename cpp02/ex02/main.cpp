/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 20:34:51 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/13 15:17:24 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int main(int argc, char **argv) {
	if (argc == 1)
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	else
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
		Fixed const c (b);
		Fixed d = 129.11f;
		Fixed e = 11.11f;
		Fixed const f (0.1f);

		std::cout << std::endl;
		std::cout << "Comparison operators: " << a << " < " << b << " is " << (a < b) << std::endl;
		std::cout << "Comparison operators: " << a << " > " << b << " is " << (a > b) << std::endl;
		std::cout << "Comparison operators: " << a << " <= " << b << " is " << (a <= b) << std::endl;
		std::cout << "Comparison operators: " << c << " <= " << b << " is " << (c <= b) << std::endl;
		std::cout << "Comparison operators: " << a << " >= " << b << " is " << (a >= b) << std::endl;
		std::cout << "Comparison operators: " << c << " >= " << b << " is " << (c >= b) << std::endl;
		std::cout << "Comparison operators: " << a << " == " << b << " is " << (a == b) << std::endl;
		std::cout << "Comparison operators: " << c << " == " << b << " is " << (c == b) << std::endl;
		std::cout << "Comparison operators: " << a << " != " << b << " is " << (a != b) << std::endl;
		std::cout << "Comparison operators: " << c << " != " << b << " is " << (c != b) << std::endl;
		std::cout << std::endl;
		std::cout << "Arithmetic operators: " << c << " + " << b << " is " << c + b << std::endl;
		std::cout << "Arithmetic operators: " << a << " + " << b << " is " << a + b << std::endl;
		std::cout << "Arithmetic operators: " << c << " - " << b << " is " << c - b << std::endl;
		std::cout << "Arithmetic operators: " << a << " - " << b << " is " << a - b << std::endl;
		std::cout << "Arithmetic operators: " << c << " * " << b << " is " << c * b << std::endl;
		std::cout << "Arithmetic operators: " << a << " * " << b << " is " << a * b << std::endl;
		std::cout << "Arithmetic operators: " << c << " / " << b << " is " << c / b << std::endl;
		std::cout << "Arithmetic operators: " << a << " / " << b << " is " << a / b << std::endl;
		std::cout << std::endl;
		std::cout << "Increment operators: " << "a++ " << a++ << " --> " << a << std::endl;
		std::cout << "Increment operators: " << "++a" << " " << ++a << " --> " << a << std::endl;
		std::cout << "Increment operators: " << "a-- " << a-- << " --> " << a << std::endl;
		std::cout << "Increment operators: " << "--a" << " " << --a << " --> " << a << std::endl;
		std::cout << std::endl;
		std::cout << "Static member function: " << "min(&a, &b) " << Fixed::min( d, e ) << std::endl;
		std::cout << "Static member function: " << "max(&a, &b) " << Fixed::max( d, e ) << std::endl;
		std::cout << "Static member function: " << "min(const &a, const &b) " << Fixed::min( f, c ) << std::endl;
		std::cout << "Static member function: " << "max(const &a, const &b) " << Fixed::max( f, c ) << std::endl;
		std::cout << std::endl;
	}
	return 0;
}