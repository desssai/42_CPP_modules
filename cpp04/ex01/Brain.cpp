/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:01:19 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 19:49:13 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Default constructor for Brain called" << std::endl;
}

Brain::Brain(Brain const& origin) {
	std::cout << "Copy constructor for Brain called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = origin.ideas[i];
}

Brain& Brain::operator = (Brain const& origin) {
	std::cout << "Copy operator for Brain called" << std::endl;
	if (this != &origin) {
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = origin.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "Destructor for Brain called" << std::endl;
}

void Brain::setIdeas(std::string const idea) {
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = idea;
}