/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:22:50 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/20 20:28:08 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main(void) {
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|           SUBJECT TESTS             |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|            MATERIAS TESTS           |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	{
		AMateria* materias[4] = {new Ice(), new Cure(), materias[0]->clone(), materias[1]->clone()};
		for (int i = 0; i < 4; ++i) {
			std::cout << materias[i]->getType() << std::endl;
			delete materias[i];
		}
	}
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|         MATERIASOURCE TESTS         |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	{
		IMateriaSource* src1 = new MateriaSource();
		MateriaSource* src2 = new MateriaSource();
		MateriaSource* src3 = new MateriaSource(*src2);
		AMateria* materias[4] = {new Ice(), new Cure(), materias[0]->clone(), materias[1]->clone()};
		AMateria* ptr = NULL;

		for (int i = 0; i < 4; ++i)
			src1->learnMateria(materias[i]);
		src1->learnMateria(materias[3]);
		src1->learnMateria(materias[3]);
		for (int i = 0; i < 4; ++i)
			src2->learnMateria(src1->createMateria("cure"));
		src2->createMateria("ice");
		*src2 = *((MateriaSource *)src1);
		ptr = src2->createMateria("ice");
		if (ptr) {
			std::cout << ptr->getType() << std::endl;
			delete ptr;
		}
		delete src1;
		delete src2;
		delete src3;
	}
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "|           CHARACTER TESTS           |" << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	{
		AMateria* ptr = NULL;
		Character* me = new Character("Igor");
		me->equip(new Ice());
		me->equip(new Ice());
		me->equip(new Ice());
		ptr = new Ice();
		me->equip(ptr);
		me->equip(ptr);
		me->equip(ptr);
		ICharacter* me_clone = new Character(*me);
		me->unequip(3);
		me->unequip(3);
		me->use(3, *me_clone);
		me->equip(new Cure());
		std::cout << "My name is: " << me->getName() << std::endl;
		me->use(3, *me_clone);
		std::cout << "My clone name is: " << me_clone->getName() << std::endl;
		me_clone->use(3, *me);
		delete me;
		delete me_clone;
		delete ptr;
	}
	return (0);
}