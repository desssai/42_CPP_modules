/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:31:47 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/16 02:07:57 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap {

public:

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	unsigned int		getHealth(void) const;
	unsigned int		getAttack(void) const;
	unsigned int		getEnergy(void) const;
	std::string const &	getName(void) const;

	ClapTrap(void);
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const & origin);
	~ClapTrap(void);

	ClapTrap & operator = (ClapTrap const & origin);

protected:

	std::string		_name;
	unsigned int	_health;
	unsigned int	_energy;
	unsigned int	_attack;

};

#endif /* CLAPTRAP_H */