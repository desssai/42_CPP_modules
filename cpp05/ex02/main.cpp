/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:05:55 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/22 14:24:16 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::srand(time(NULL));
	
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|         FORM CREATION TEST         |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	
	Bureaucrat HighAssGradeBureaucrat("Frederick", 3);
	Bureaucrat LowAssGradeBureaucrat("BrokeJoe", 147);
	
	Form* pile[18];
	for (int i = 0; i < 6; ++i) {
		if (i % 3 == 0)
			pile[i] = new PresidentialPardonForm("person_" + std::to_string(i));
		else if (i % 3 == 1)
			pile[i] = new RobotomyRequestForm("place_" + std::to_string(i));
		else
			pile[i] = new ShrubberyCreationForm("forest_" + std::to_string(i));
	}	
	Form* pile_copy1[3] =  {new PresidentialPardonForm(),
							new RobotomyRequestForm(),
							new ShrubberyCreationForm()};
	for (int i = 0; i < 3; ++i) {
		*pile_copy1[i] = *pile[i];
	}	
	Form* pile_copy2[3] =  {new PresidentialPardonForm(*(PresidentialPardonForm *)pile_copy1[0]),
							new RobotomyRequestForm(*(RobotomyRequestForm *)pile_copy1[1]),
							new ShrubberyCreationForm(*(ShrubberyCreationForm *)pile_copy1[2])};
	std::cout << "---------------ORIGINALS--------------" << std::endl;
	for (int i = 0; i < 6; ++i) {
		std::cout << "FORM NUMBER:\t" << i << ".\t" << *pile[i] << std::endl;
	}
	std::cout << "-----------COPIES NUMBER 1------------" << std::endl;
	for (int i = 0; i < 3; ++i) {
		std::cout << "FORM NUMBER:\t" << i << ".\t" << *pile_copy1[i] << std::endl;
	}
	for (int i = 0; i < 3; ++i) {
		delete pile_copy1[i];
	}
	std::cout << "-----------COPIES NUMBER 2------------" << std::endl;
	for (int i = 0; i < 3; ++i) {
		std::cout << "FORM NUMBER:\t" << i << ".\t" << *pile_copy2[i] << std::endl;
	}
	for (int i = 0; i < 3; ++i) {
		delete pile_copy2[i];
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|       NOT SIGNED EXEC TEST         |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			for (int i = 0; i < 3; ++i) {
				HighAssGradeBureaucrat.executeForm(*pile[i]);
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|    NOT SIGNED EXEC FORCED TEST     |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			for (int i = 3; i < 6; ++i) {
				pile[i]->execute(HighAssGradeBureaucrat);
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	try {
		for (int i = 0; i < 6; ++i)
			pile[i]->beSigned(HighAssGradeBureaucrat);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|        LOW GRADE EXEC TEST         |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			for (int i = 0; i < 3; ++i) {
				LowAssGradeBureaucrat.executeForm(*pile[i]);
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|    LOW GRADE EXEC FORCED TEST      |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			for (int i = 3; i < 6; ++i) {
				pile[i]->execute(LowAssGradeBureaucrat);
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|          SIGNED EXEC TEST          |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			for (int i = 0; i < 3; ++i) {
				HighAssGradeBureaucrat.executeForm(*pile[i]);
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|       SIGNED EXEC FORCED TEST      |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		try {
			for (int i = 3; i < 6; ++i) {
				pile[i]->execute(HighAssGradeBureaucrat);
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	for (int i = 0; i < 6; ++i) {
		delete pile[i];
	}
	return (0);
}