/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:31:50 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/16 19:50:55 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void) {	
	ScavTrap TrappyBoyA;
	ScavTrap TrappyBoyB("LEGEND");

	for (int i = 0; i < 5; ++i) {
		TrappyBoyA.attack("LEGEND");
		TrappyBoyB.takeDamage(20);
	}
	TrappyBoyB.beRepaired(10);
	TrappyBoyA.takeDamage(99);
	TrappyBoyA.beRepaired(100);
	std::cout << TrappyBoyA.getName() << " has " << TrappyBoyA.getHealth() << " hp." << std::endl;
	std::cout << TrappyBoyB.getName() << " has " << TrappyBoyB.getHealth() << " hp." << std::endl;
	TrappyBoyA.guardGate();
	return (0);
}