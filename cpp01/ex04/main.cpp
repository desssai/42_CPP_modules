/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:16:42 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/11 01:59:52 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace(std::string const filename, std::string const before, std::string const after) {
	std::ifstream	input;
	std::ofstream	output;
	std::string		buffer;
	unsigned int	i;
	unsigned int	j;


	input.open(filename, std::ifstream::in);
	if (!input) {
		std::cout << "ERROR OPENING INPUT FILE." << std::endl;
		return ;
	}
	output.open(filename + ".replace");
	if (!output) {
		std::cout << "ERROR OPENING OUTPUT FILE." << std::endl;
		return ;
	}
	while (std::getline(input, buffer)) {
		i = -1;
		while (buffer[++i]) {
			if (buffer[i] != before[0])
				output << buffer[i];
			else {
				j = 0;
				while (buffer[i + j] && before[j] && buffer[i + j] == before[j])
					j++;
				if (j == before.length()) {
					i += j - 1;
					output << after;
				}
				else
					output << buffer[i];
			}
		}
		output << std::endl;
	}
	input.close();
	output.close();
}

int main(int argc, char** argv) {
	if (argc == 4) 
		replace (argv[1], argv[2], argv[3]);
	return (0);
}