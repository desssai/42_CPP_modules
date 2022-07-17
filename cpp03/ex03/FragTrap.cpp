/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:56:25 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/16 20:12:11 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	this->_health = 100u;
	this->_energy = 100u;
	this->_attack = 30u;
	std::cout << "Default constructor for FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
	this->_health = 100u;
	this->_energy = 100u;
	this->_attack = 30u;
	std::cout << "Normal constructor for FragTrap called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & origin) : ClapTrap(origin.getName()) {
	this->_health = 100u;
	this->_energy = 100u;
	this->_attack = 30u;
	std::cout << "Copy constructor for FragTrap called" << std::endl;
}

FragTrap & FragTrap::operator = (FragTrap const & origin) {
	if (this != &origin) {
		this->_attack = origin.getAttack();
		this->_health = origin.getHealth();
		this->_energy = origin.getEnergy();
		this->_name = origin.getName();
	}
	return  (*this);
}

void FragTrap::highFivesGuys(void) const {
	std::cout << "FragTrap " << this->_name << " requests a positive high five!" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << "Destructor for FragTrap called" << std::endl;
}
