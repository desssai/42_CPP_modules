/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:57:02 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 17:10:44 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
	void	makeSound(void) const;

	WrongCat(void);
	WrongCat(WrongCat const & origin);
	~WrongCat(void);

	WrongCat & operator = (WrongCat const & origin);

};

#endif