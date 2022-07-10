/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 14:50:17 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/10 15:02:56 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void call_horde(int N, std::string name) {
	Zombie* zptr = zombieHorde(N, name);

	for (int i = 0; i < N; ++i)
		zptr[i].announce();
	delete [] zptr;
}

int main(void) {
	call_horde(0, "NULL");
	call_horde(5, "Jack");
	call_horde(10, "Darius");
	return (0);
}
