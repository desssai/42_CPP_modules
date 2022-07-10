/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:20:08 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/10 15:00:24 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name) {
	Zombie *zptr = new Zombie[N];

	for (int i = 0; i <= N; i++)  {
		zptr[i].setname(name);
	}
	return (zptr);
}
