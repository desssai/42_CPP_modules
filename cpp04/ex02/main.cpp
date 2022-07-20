/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:28:22 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 20:24:27 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main() {
	{
		// const AAnimal test;
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();

		delete j; //should not create a leak
		delete i;
	}
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|             NEW TESTS               |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	{
		const AAnimal* animals[4];
		animals[0] = new Dog();
		animals[1] = new Dog("DOG IDEA");
		animals[2] = new Cat("CAT IDEA");
		animals[3] = new Cat();

		for (int i = 0; i < 4; ++i)
			delete animals[i];
	}
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|             NEW TESTS               |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	{
		const Cat *cat1 = new Cat("MEWOWEOEOW");
		const Cat *cat2 = new Cat(*cat1);
		std::cout << "Cat1 ideas are all bout: " << cat1->getBrain()->ideas[0] << std::endl;
		cat1->getBrain()->setIdeas("OOOOOOOOOODAMN");
		std::cout << "Cat1 ideas are all bout: " << cat1->getBrain()->ideas[0] << std::endl;
		delete cat1;
		std::cout << "Cat2 ideas are all bout: " << cat2->getBrain()->ideas[0] << std::endl;
		delete cat2;
	}
	return 0;
}