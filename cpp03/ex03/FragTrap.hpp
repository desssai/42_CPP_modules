/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:54:31 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/16 20:38:03 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	void	highFivesGuys(void) const;

	FragTrap(void);
	FragTrap(std::string const name);
	FragTrap(FragTrap const & origin);
	~FragTrap(void);

	FragTrap & operator = (FragTrap const & origin);
};

#endif