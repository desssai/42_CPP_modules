/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:41 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 19:53:25 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal {

public:
	virtual void		makeSound(void) const;
	std::string const	getType(void) const;

	Animal(void);
	Animal(Animal const & origin);
	virtual ~Animal(void);

	virtual Animal & operator = (Animal const & origin);

protected:
	std::string ptype;

};

#endif