/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:36:55 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/20 20:10:52 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	return ;
}

AMateria::AMateria(std::string const & _type) : type(_type) {
	return ;
}

AMateria::AMateria(AMateria const & origin) {
	(*this) = origin;
}

AMateria & AMateria::operator = (AMateria const & origin) {
	if (this != &origin)
		this->type = origin.type;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->type);
}

AMateria::~AMateria(void) {
	return ;
}