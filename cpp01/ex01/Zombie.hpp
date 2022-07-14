/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:44:30 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 16:19:58 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {

public:
	void announce(void);
	void setname(std::string name);

	Zombie(void);
	~Zombie(void);

private:
	std::string _name;
};

Zombie*    zombieHorde(int N, std::string name);

#endif /* ZOMBIE_H */
