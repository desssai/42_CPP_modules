/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:44:48 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 20:18:32 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {

public:
	virtual void	makeSound(void) const;
	Brain*	getBrain(void) const;

	Cat(void);
	Cat(std::string const thought);
	Cat(Cat const & origin);
	virtual ~Cat(void);

	Cat & operator = (Cat const & origin);

private:
	Brain* _brain;

};

#endif