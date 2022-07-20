/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:48 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 17:10:03 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal {

public:
	virtual void	makeSound(void) const;

	Cat(void);
	Cat(Cat const & origin);
	~Cat(void);

	Cat & operator = (Cat const & origin);

};

#endif