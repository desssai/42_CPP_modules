/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:28:15 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/17 18:54:25 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap() {
	std::cout << "Default constructor for DiamondTrap called" << std::endl;
	this->name = "blank";
	this->ClapTrap::_name = "blank_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(), FragTrap() {
	std::cout << "Normal constructor for DiamondTrap called" << std::endl;
	this->name = name;
	this->ClapTrap::_name = name + "_clap_name";
	this->_health = FragTrap::_health;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(DiamondTrap const & origin) {
	std::cout << "Copy constructor for DiamondTrap called" << std::endl;
	this->name = origin.name;
	this->ClapTrap::_name = origin._name + "_clap_name";
	this->_health = origin._health;
	this->_energy = origin._energy;
	this->_attack = origin._attack;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap const & origin) {
	std::cout << "Copy operator for DiamondTrap called" << std::endl;
	if (this != &origin) {
		this->name = origin.name;
		this->ClapTrap::_name = origin._name + "_clap_name";
		this->_health = origin._health;
		this->_energy = origin._energy;
		this->_attack = origin._attack;
	}
	return (*this);
}

void DiamondTrap::whoAmI(void) const {
	std::cout << "My name is " << name << ". My clap name is " << _name << "." << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "Destructor for DiamondTrap called" << std::endl;
}