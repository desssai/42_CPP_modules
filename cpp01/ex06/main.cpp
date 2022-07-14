/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 01:30:28 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 18:40:48 by ncarob           ###   ########.fr       */
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
		std::cout << "HARL DEBUG COMPLAIN:   \n";
		MyHarl.complain("DEBUG");
		std::cout << "HARL INFO COMPLAIN:   \n";
		MyHarl.complain("INFO");
		std::cout << "HARL WARNING COMPLAIN:   \n";
		MyHarl.complain("WARNING");
		std::cout << "HARL ERROR COMPLAIN:   \n";
		MyHarl.complain("ERROR");
	}
	return (0);
}
