/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:12:29 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/20 18:41:24 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:
	virtual void learnMateria(AMateria* ptr);
	virtual AMateria* createMateria(std::string const & type);
	
	MateriaSource(void);
	MateriaSource(MateriaSource const & origin);
	virtual ~MateriaSource(void);

	MateriaSource & operator = (MateriaSource const & origin);

protected:
	AMateria* known[4];

};

#endif