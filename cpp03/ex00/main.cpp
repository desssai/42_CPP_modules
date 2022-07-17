/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:31:50 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/16 01:56:05 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void) {
	
	ClapTrap TrappyBoyA;
	ClapTrap TrappyBoyB("LEGEND");

	for (int i = 0; i < 3; ++i) {
		TrappyBoyA.attack("LEGEND");
		TrappyBoyB.takeDamage(4);
	}
	TrappyBoyB.beRepaired(10);
	TrappyBoyA.takeDamage(9);
	TrappyBoyA.beRepaired(100);
	std::cout << TrappyBoyA.getName() << " has " << TrappyBoyA.getHealth() << " hp." << std::endl;
	std::cout << TrappyBoyB.getName() << " has " << TrappyBoyB.getHealth() << " hp." << std::endl;
	return (0);
}