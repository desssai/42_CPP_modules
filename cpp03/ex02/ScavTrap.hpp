/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:59:11 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/16 20:03:16 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	void	attack(const std::string& target);
	void	guardGate(void) const;

	ScavTrap(void);
	ScavTrap(std::string const name);
	ScavTrap(ScavTrap const & origin);
	~ScavTrap();

	ScavTrap & operator = (ScavTrap const & origin);
};

#endif