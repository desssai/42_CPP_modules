/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:59:13 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/17 17:38:07 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	this->_health = 100u;
	this->_energy = 50u;
	this->_attack = 20u;
	std::cout << "Default constructor for ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
	this->_health = 100u;
	this->_energy = 50u;
	this->_attack = 20u;
	std::cout << "Normal constructor for ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & origin) : ClapTrap(origin.getName()) {
	this->_health =  origin.getHealth();
	this->_energy = origin.getEnergy();
	this->_attack = origin.getAttack();
	std::cout << "Copy constructor for ScavTrap called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Destcructor called for ScavTrap" << std::endl;
}

ScavTrap & ScavTrap::operator = (ScavTrap const & origin) {
	if (this != &origin) {
		this->_attack = origin._attack;
		this->_health = origin._health;
		this->_energy = origin._energy;
		this->_name =  origin._name;
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (!this->_energy) {
		std::cout << "ScavTrap " << _name << " ran out of energy..." << std::endl;
		return ;
	}
	if (!this->_health) {
		std::cout << "ScavTrap " << _name << " is already dead..." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
	--this->_energy;
}

void ScavTrap::guardGate(void) const {
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode." << std::endl;
}
