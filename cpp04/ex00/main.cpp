/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:28:22 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 17:14:06 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	{
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound(); //will output the cat sound!
		dog->makeSound();
		meta->makeSound();

		delete meta;
		delete cat;
		delete dog;
	}
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|             NEW TESTS               |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();

		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound();
		meta->makeSound();

		delete meta;
		delete cat;
	}
	return 0;
}