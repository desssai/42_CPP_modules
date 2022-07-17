/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:31:50 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/17 18:52:24 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void) {	
	DiamondTrap TrappyBoyB("LEGEND");
	DiamondTrap	TrappyBoyC("John");

	std::cout << TrappyBoyC.getName() << " has " << TrappyBoyC.getHealth() << " hp, " << TrappyBoyC.getEnergy() << " ep, " << TrappyBoyC.getAttack() << " attack damage." << std::endl;
	for (int i = 0; i < 5; ++i) {
		TrappyBoyC.attack("LEGEND");
		TrappyBoyB.takeDamage(30);
	}
	TrappyBoyB.beRepaired(10);
	TrappyBoyC.takeDamage(99);
	TrappyBoyC.beRepaired(100);
	std::cout << TrappyBoyC.getName() << " has " << TrappyBoyC.getHealth() << " hp." << std::endl;
	std::cout << TrappyBoyB.getName() << " has " << TrappyBoyB.getHealth() << " hp." << std::endl;
	TrappyBoyC.guardGate();
	TrappyBoyC.highFivesGuys();
	TrappyBoyC.whoAmI();
	return (0);
}
