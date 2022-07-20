/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:41 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 20:15:36 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

# include <string>
# include <iostream>

class AAnimal {

public:
	virtual void		makeSound(void) const = 0;
	std::string const	getType(void) const;

	AAnimal(void);
	AAnimal(AAnimal const & origin);
	virtual ~AAnimal(void);

	virtual AAnimal & operator = (AAnimal const & origin);

protected:
	std::string ptype;

};

#endif