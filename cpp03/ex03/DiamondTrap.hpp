/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:28:17 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/17 18:54:27 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap {

public:
	void whoAmI(void) const;

	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & origin);
	~DiamondTrap(void);

	DiamondTrap & operator = (DiamondTrap const & origin);

private:
	std::string name;
};

#endif