/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:31:30 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/10 19:09:41 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

public:
	void attack(void) const;
	void setWeapon(Weapon& weapon);
	
	HumanB(std::string name);
	~HumanB(void);

private:
	std::string _name;
	Weapon* _weapon;
};

#endif