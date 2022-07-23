/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:05:55 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/23 16:25:43 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::srand(time(NULL));
	
	Bureaucrat HighAssGradeBureaucrat("Frederick", 3);
	Intern JustSomeGuy;

	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|       INTERN EXIST TESTS           |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		Form* form[6];
		
		form[0] = JustSomeGuy.makeForm("presidential pardon", "target1");
		form[1] = JustSomeGuy.makeForm("pardon", "target2");
		form[2] = JustSomeGuy.makeForm("robotomy request", "target3");
		form[3] = JustSomeGuy.makeForm("request", "target4");
		form[4] = JustSomeGuy.makeForm("shrubbery creation", "target5");
		form[5] = JustSomeGuy.makeForm("creation", "target6");

		for (int i = 0; i < 6; i++) {
			HighAssGradeBureaucrat.signForm(*(form[i]));
			HighAssGradeBureaucrat.executeForm(*(form[i]));
			delete form[i];
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|     INTERN NON-EXIST TESTS         |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		Form* form[3];
		
		form[0] = JustSomeGuy.makeForm("presidasdential paasdrdon", "target1");
		form[1] = JustSomeGuy.makeForm("roasdfbotomy reasdquest", "target2");
		form[2] = JustSomeGuy.makeForm("shrubbeasfry casdreation", "target3");

		try {
			for (int i = 0; i < 3; i++) {
				if (form[i]) {
					HighAssGradeBureaucrat.signForm(*(form[i]));
					HighAssGradeBureaucrat.executeForm(*(form[i]));
					delete form[i];
				}
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "|        INTERN BLANK TESTS          |" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	{
		Form* form[3];
		
		form[0] = JustSomeGuy.makeForm("", "");
		form[1] = JustSomeGuy.makeForm("", "");
		form[2] = JustSomeGuy.makeForm("", "");

		try {
			for (int i = 0; i < 3; i++) {
				if (form[i]) {
					HighAssGradeBureaucrat.signForm(*(form[i]));
					HighAssGradeBureaucrat.executeForm(*(form[i]));
					delete form[i];
				}
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}