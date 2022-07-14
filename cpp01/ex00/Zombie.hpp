/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:44:30 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 16:19:25 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {

public:
	void announce(void);

	Zombie(std::string name);
	~Zombie(void);

private:
	std::string _name;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif /* ZOMBIE_H */