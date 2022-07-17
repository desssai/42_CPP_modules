/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:31:50 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/16 20:18:17 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void) {	
	FragTrap TrappyBoyA;
	FragTrap TrappyBoyB("LEGEND");

	for (int i = 0; i < 5; ++i) {
		TrappyBoyA.attack("LEGEND");
		TrappyBoyB.takeDamage(30);
	}
	TrappyBoyB.beRepaired(10);
	TrappyBoyA.takeDamage(99);
	TrappyBoyA.beRepaired(100);
	std::cout << TrappyBoyA.getName() << " has " << TrappyBoyA.getHealth() << " hp." << std::endl;
	std::cout << TrappyBoyB.getName() << " has " << TrappyBoyB.getHealth() << " hp." << std::endl;
	TrappyBoyA.highFivesGuys();
	return (0);
}