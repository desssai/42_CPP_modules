/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 01:30:28 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/11 02:28:04 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl MyHarl;

	if (argc == 2)
		MyHarl.complain(argv[1]);
	else {
		std::cout << "HARL EMPTY COMPLAIN:   \n";
		MyHarl.complain("");
		std::cout << "HARL WRONG COMPLAIN:   \n";
		MyHarl.complain("!^$!@#%");
		std::cout << "HARL DEBUG COMPLAIN:   ";
		MyHarl.complain("DEBUG");
		std::cout << "HARL INFO COMPLAIN:   ";
		MyHarl.complain("INFO");
		std::cout << "HARL WARNING COMPLAIN:   ";
		MyHarl.complain("WARNING");
		std::cout << "HARL ERROR COMPLAIN:   ";
		MyHarl.complain("ERROR");
	}
	return (0);
}
