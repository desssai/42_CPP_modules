/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 01:30:25 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 18:40:15 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <string>

# ifndef DEBUG_STR
#  define DEBUG_STR "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\n"
# endif

# ifndef INFO_STR
#  define INFO_STR "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"
# endif

# ifndef WARNING_STR
#  define WARNING_STR "[ WARNING ]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n"
# endif

# ifndef ERROR_STR
#  define ERROR_STR "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n"
# endif

# ifndef COMPLAIN_STR
#  define COMPLAIN_STR "[ Probably complaining about insignificant problems ]"
# endif 

class Harl {

public:

	void	complain(std::string const level) const;

	Harl(void);
	~Harl(void);

private:

	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;

};

#endif
