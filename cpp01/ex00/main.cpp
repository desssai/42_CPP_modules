/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:05:26 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 16:18:27 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie *ZombieA = newZombie("Deril");
	randomChump("John");
	ZombieA->announce();

	delete(ZombieA);
	return (0);
}