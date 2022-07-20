/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 19:00:19 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/19 20:04:58 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain {

public:
	void setIdeas(std::string const idea);

	Brain(void);
	Brain(Brain const& origin);
	~Brain(void);

	Brain& operator = (Brain const& origin);

	std::string	ideas[100];

private:

};

#endif