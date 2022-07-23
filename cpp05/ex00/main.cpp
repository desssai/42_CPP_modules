/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:20:22 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/21 19:11:28 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|        NORMAL INCREMENT TEST       |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		Bureaucrat Sam("Sam", 3);
		std::cout << Sam << std::endl;
		std::cout << ++Sam << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|        NORMAL DECREMENT TEST       |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		Bureaucrat John("John", 145);
		std::cout << John << std::endl;
		std::cout << --John << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|      TOO HIGH CONSTRUCT TEST       |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			Bureaucrat BigJoe("Joe", 0);
			std::cout << BigJoe << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|       TOO LOW CONSTRUCT TEST       |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			Bureaucrat SmallJoe("Joe", 151);
			std::cout << SmallJoe << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|       TOO HIGH INCREMENT TEST      |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			Bureaucrat IdealJoe("Joe", 1);
			std::cout << IdealJoe << std::endl;
			std::cout << ++IdealJoe << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|       TOO LOW DECREMENT TEST       |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			Bureaucrat WorstJoe("Joe", 150);
			std::cout << WorstJoe << std::endl;
			std::cout << --WorstJoe << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}