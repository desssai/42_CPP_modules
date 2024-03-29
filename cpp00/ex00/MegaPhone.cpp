/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaPhone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:24:51 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 15:49:18 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void ft_striter(char **argv, int argc) {
	for (int i = 1; i <= argc; i++) {
		for (unsigned int j = 0; j < std::strlen(argv[i]); j++) {
			std::cout << (char)std::toupper(argv[i][j]);
		}
	}
}

int main(int argc, char **argv) {
	--argc ? ft_striter(argv, argc) : (void)(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *");
	std::cout << std::endl;
	return (0);
}