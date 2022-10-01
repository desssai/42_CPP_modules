/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:48:50 by ncarob            #+#    #+#             */
/*   Updated: 2022/10/01 16:20:16 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Span.hpp"

int main(void) {
	std::cout << "-------------------------" << std::endl;
	std::cout << "---      TEST 1       ---" << std::endl;
	std::cout << "-------------------------" << std::endl;
	{
		Span alpha(5);
		Span beta;

		alpha.addNumber(-12);
		alpha.addNumber(124);
		alpha.addNumber(1234);
		alpha.addNumber(12345);

		std::cout << "alpha longest span is: " << alpha.longestSpan() << std::endl;
		std::cout << "alpha shortest span is: " << alpha.shortestSpan() << std::endl;

		beta = alpha;

		alpha.addNumber(-1234567);

		std::cout << "beta longest span is: " << beta.longestSpan() << std::endl;
		std::cout << "beta shortest span is: " << beta.shortestSpan() << std::endl;
		std::cout << "alpha longest span is: " << alpha.longestSpan() << std::endl;
		std::cout << "alpha shortest span is: " << alpha.shortestSpan() << std::endl;

		Span delta(beta);

		beta.addNumber(-11);
		std::cout << "delta longest span is: " << delta.longestSpan() << std::endl;
		std::cout << "delta shortest span is: " << delta.shortestSpan() << std::endl;
		std::cout << "beta longest span is: " << beta.longestSpan() << std::endl;
		std::cout << "beta shortest span is: " << beta.shortestSpan() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;
	std::cout << "---      TEST 2       ---" << std::endl;
	std::cout << "-------------------------" << std::endl;
	{	
		Span alpha(10);

		for (int i = 0; i < 12; i++) {
			try {
				alpha.addNumber(i);
				std::cout << i + 1 << ": longest span is: " << alpha.longestSpan() << std::endl;
				std::cout << i + 1 << ": shortest span is: " << alpha.shortestSpan() << std::endl;
			}
			catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
	std::cout << "-------------------------" << std::endl;
	std::cout << "---      TEST 3       ---" << std::endl;
	std::cout << "-------------------------" << std::endl;
	{
		Span beta(2);
		
		beta.addNumber(-2147483648);
		beta.addNumber(2147483647);

		std::cout << "longest span is: " << beta.longestSpan() << std::endl;
		std::cout << "shortest span is: " << beta.shortestSpan() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;
	std::cout << "---      TEST 4       ---" << std::endl;
	std::cout << "-------------------------" << std::endl;
	{
		Span sp = Span(5);
		
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "-------------------------" << std::endl;
	std::cout << "---      TEST 4       ---" << std::endl;
	std::cout << "-------------------------" << std::endl;
	{
		Span alpha(20000);

		alpha.addNumber(-2147483648, 1000, 10000);
		std::cout << "alpha longest span is: " << alpha.longestSpan() << std::endl;
		std::cout << "alpha shortest span is: " << alpha.shortestSpan() << std::endl;
		alpha.addNumber(50000, 10, 10000);
		std::cout << "alpha longest span is: " << alpha.longestSpan() << std::endl;
		std::cout << "alpha shortest span is: " << alpha.shortestSpan() << std::endl;
		try {
			alpha.addNumber(50000, 10, 10000);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}
