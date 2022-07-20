/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:14:58 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/20 19:53:12 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

void MateriaSource::learnMateria(AMateria* ptr) {
	int i = -1;

	while (this->known[++i])
		;
	if (i != 4)
		this->known[i] = ptr;
	else
		std::cout << "There are already all materias" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; ++i) {
		if (this->known[i] && this->known[i]->getType() == type)
			return (this->known[i]->clone());
	}
	std::cout << "There is none of that type in source" << std::endl;
	return (NULL);
}

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; ++i)
		known[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & origin) {
	(*this) = origin;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; ++i) {
		if (this->known[i])
			delete this->known[i];
	}
}

MateriaSource & MateriaSource::operator = (MateriaSource const & origin) {
	if (this != &origin) {
		for (int i = 0; i < 4; ++i) {
			if (this->known[i])
				delete this->known[i];
			if (origin.known[i])
				this->known[i] = origin.known[i]->clone();
		}
	}
	return (*this);
}