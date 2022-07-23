/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:05:55 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/21 19:32:13 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|          NORMAL SIGN TEST          |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		Bureaucrat John("John", 50);
		Form form1("admission form", 100, 50);
		Form form2("removal form", 100, 50);
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		John.signForm(form1);
		form2.beSigned(John);
		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|      TOO HIGH CONSTRUCT TEST       |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			Form BigForm1("some papers", 0, 16);
			Form BigForm2("some papers", 4, -12);
			std::cout << BigForm1 << std::endl;
			std::cout << BigForm2 << std::endl;
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
			Form SmallForm1("some papers", 12, 160);
			Form SmallForm2("some papers", 157, 12);
			std::cout << SmallForm1 << std::endl;
			std::cout << SmallForm2 << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|       LOW GRADE SIGN TEST 1        |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		Bureaucrat A("Dumbass 1", 14);
		Form SmallForm1("some important papers number 1", 12, 16);
		Form SmallForm2("some important papers number 2", 15, 12);
		std::cout << SmallForm1 << std::endl;
		std::cout << SmallForm2 << std::endl;
		A.signForm(SmallForm1);
		A.signForm(SmallForm2);
		std::cout << SmallForm1 << std::endl;
		std::cout << SmallForm2 << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|       LOW GRADE SIGN TEST 2        |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		Bureaucrat A("Dumbass 2", 14);
		Form SmallForm1("some important papers number 1", 12, 16);
		Form SmallForm2("some important papers number 2", 15, 12);
		std::cout << SmallForm1 << std::endl;
		std::cout << SmallForm2 << std::endl;
		try {
			SmallForm1.beSigned(A);
			SmallForm2.beSigned(A);
			std::cout << SmallForm1 << std::endl;
			std::cout << SmallForm2 << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|       ALREADY SIGNED TEST 1        |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		Bureaucrat A("Dumbass 3", 14);
		Form SmallForm1("some important papers number 1", 21, 109);
		std::cout << SmallForm1 << std::endl;
		A.signForm(SmallForm1);
		std::cout << SmallForm1 << std::endl;
		A.signForm(SmallForm1);
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|       ALREADY SIGNED TEST 2        |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		Bureaucrat A("Dumbass 4", 14);
		Form SmallForm1("some important papers number 1", 45, 112);
		std::cout << SmallForm1 << std::endl;
		A.signForm(SmallForm1);
		std::cout << SmallForm1 << std::endl;
		try {
			SmallForm1.beSigned(A);
			std::cout << SmallForm1 << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}