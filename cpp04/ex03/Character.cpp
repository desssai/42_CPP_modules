/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:23:57 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/20 20:20:22 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName(void) const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	int i = -1;

	while (++i < 4) {
		if (!this->_materias[i]) {
			this->_materias[i] = m;
			return ;
		}
	}
	std::cout << "There are already all materias" << std::endl;
}

void Character::unequip(int idx) {
	if (this->_materias[idx])
		this->_materias[idx] = NULL;
	else
		std::cout << "There is no materia at index: " << idx << std::endl;
}

void Character::use(int idx, ICharacter& target) {
	if (this->_materias[idx])
		this->_materias[idx]->use(target);
	else
		std::cout << "There is no materia at index: " << idx << std::endl;
}

Character::Character(void) : _name("blank") {
	for (int i = 0; i < 4; ++i)
		_materias[i] = NULL;
}

Character::Character(std::string const name) : _name(name) {
	for (int i = 0; i < 4; ++i)
		_materias[i] = NULL;
}

Character::Character(Character const & origin) {
	(*this) = origin;
}

Character & Character::operator = (Character const & origin) {
	if (this != &origin) {
		this->_name = origin._name;
		for (int i = 0; i < 4; ++i) {
			if (this->_materias[i]) 
				delete this->_materias[i];
			if (origin._materias[i])
				this->_materias[i] = origin._materias[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(void) {
	for (int i = 0; i < 4; ++i) {
		if (this->_materias[i]) 
			delete this->_materias[i];
	}
}