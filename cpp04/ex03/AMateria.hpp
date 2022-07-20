/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:36:53 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/20 17:54:15 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class AMateria {

public:
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;

	std::string const & getType() const; //Returns the materia type

	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & origin);
	virtual ~AMateria(void);

	AMateria & operator = (AMateria const& origin);

protected:
	std::string type;

};

#endif