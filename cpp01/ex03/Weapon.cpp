/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:31:34 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/10 18:47:21 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	return ;
}

const std::string& Weapon::getType(void) const {
	return this->_type;
}

void Weapon::setType(std::string new_type) {
	this->_type = new_type;
}

Weapon::~Weapon() {
	return ;
}