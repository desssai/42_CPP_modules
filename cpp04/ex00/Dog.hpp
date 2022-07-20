/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:53 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 17:09:59 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal {

public:
	virtual void	makeSound(void) const;

	Dog(void);
	Dog(Dog const & origin);
	~Dog(void);

	Dog & operator = (Dog const & origin);

};

#endif