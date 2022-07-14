/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:16:42 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 18:28:54 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace(std::string const filename, std::string const before, std::string const after) {
	std::ifstream	input;
	std::ofstream	output;
	std::string		buffer;
	std::size_t		pos, blen = before.length();

	if (!blen) {
		std::cout << "ERROR. BEFORE IS NULL." << std::endl;
		return ;
	}
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
		if (!input && !input.eof())
			break ;
		pos = buffer.find(before, 0);
		while (pos != std::string::npos) {
			buffer.erase(pos, blen);
			buffer.insert(pos, after);
			pos += after.length();
			pos = buffer.find(before, pos);
		}
		output << buffer;
		if (!input.eof())
			output << std::endl;
	}
	input.close();
	output.close();
}

int main(int argc, char** argv) {
	if (argc == 4) 
		replace (argv[1], argv[2], argv[3]);
	else
		std::cout << "ERROR. WRONG ARGS." << std::endl;
	return (0);
}