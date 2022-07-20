/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:56:13 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 16:58:57 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal {

public:
	void		makeSound(void) const;
	std::string const	getType(void) const;

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & origin);
	~WrongAnimal(void);

	WrongAnimal & operator = (WrongAnimal const & origin);

protected:
	std::string ptype;

};

#endif