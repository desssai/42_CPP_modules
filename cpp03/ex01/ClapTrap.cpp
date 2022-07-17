/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:31:44 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/16 19:47:44 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("blank"), _health(10u), _energy(10u), _attack(0u) {
	std::cout << "Default constructor for ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10u), _energy(10u), _attack(0u) {
	std::cout << "Normal constructor for ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & origin) : _name(origin.getName()), _health(origin.getHealth()), _energy(origin.getEnergy()), _attack(origin.getAttack()) {
	std::cout << "Copy constructor for ClapTrap called" << std::endl;
}

ClapTrap & ClapTrap::operator = (ClapTrap const & origin) {
	if (this != &origin) {
		this->_attack = origin.getAttack();
		this->_name = origin.getName();
		this->_health = origin.getHealth();
		this->_energy = origin.getEnergy();
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (!this->_energy) {
		std::cout << "ClapTrap " << _name << " ran out of energy..." << std::endl;
		return ;
	}
	if (!this->_health) {
		std::cout << "ClapTrap " << _name << " is already dead..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
	--this->_energy;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (!this->_health) {
		std::cout << "ClapTrap " << _name << " is already dead..." << std::endl;
		return ;
	}
	if (amount > this->_health)
		this->_health = 0;
	else
		this->_health -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->_energy) {
		std::cout << "ClapTrap " << _name << " ran out of energy..." << std::endl;
		return ;
	}
	if (!this->_health) {
		std::cout << "ClapTrap " << _name << " is already dead..." << std::endl;
		return ;
	}
	this->_health += amount;
	std::cout << "ClapTrap " << _name << " repairs " << amount << " health points!" << std::endl;
	--this->_energy;
}

unsigned int ClapTrap::getHealth(void) const {
	return (this->_health);
}

unsigned int ClapTrap::getAttack(void) const {
	return (this->_attack);
}

unsigned int ClapTrap::getEnergy(void) const {
	return (this->_energy);
}

std::string const &	ClapTrap::getName(void) const {
	return (this->_name);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor called for ClapTrap" << std::endl;
}
