/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:31:36 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/10 18:47:14 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon {

public:
	const std::string&	getType(void) const;
	void				setType(std::string new_type);
	
	Weapon(std::string type);
	~Weapon(void);

private:
	std::string _type;
};

#endif