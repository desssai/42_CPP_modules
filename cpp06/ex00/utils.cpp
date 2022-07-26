/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 23:24:23 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/26 15:53:40 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void printFloat(std::string const &str) {
	float num = std::stof(str);

	if (num > -1 && num < 32)
		std::cout << "CHAR: Non Displayable" << std::endl;
	else if (num < 0 || num > 127 || str == "nanf")
		std::cout << "CHAR: Impossible" << std::endl;
	else
		std::cout << "CHAR: " << static_cast<char>(num) << std::endl;
	if (num < INT_MIN || num > INT_MAX || str == "nanf")
		std::cout << "INT: Impossible" << std::endl;
	else
		std::cout << "INT: " << static_cast<int>(num) << std::endl;
	std::cout << "DOUBLE: " << static_cast<double>(num) << std::endl;
	std::cout << "FLOAT: " << num << "f" << std::endl;
}

void printDouble(std::string const &str) {
	double num = std::stod(str);

	if (num > -1 && num < 32)
		std::cout << "CHAR: Non Displayable" << std::endl;
	else if (num < 0 || num > 127 || str == "nan")
		std::cout << "CHAR: Impossible" << std::endl;
	else
		std::cout << "CHAR: " << static_cast<char>(num) << std::endl;
	if (num < INT_MIN || num > INT_MAX || str == "nan")
		std::cout << "INT: Impossible" << std::endl;
	else
		std::cout << "INT: " << static_cast<int>(num) << std::endl;
	std::cout << "DOUBLE: " << num << std::endl;
	if ((num < __FLT_MIN__ || num > __FLT_MAX__) && str.find("inf") == std::string::npos)
		std::cout << "FLOAT: Impossible" << std::endl;
	else
		std::cout << "FLOAT: " << static_cast<float>(num) << "f" << std::endl;
}

void printInteger(std::string const &str) {
	int num = std::stoi(str);

	if (num > -1 && num < 32)
		std::cout << "CHAR: Non Displayable" << std::endl;
	else if (num < 0 || num > 127)
		std::cout << "CHAR: Impossible" << std::endl;
	else
		std::cout << "CHAR: " << static_cast<char>(num) << std::endl;
	std::cout << "INT: " << num << std::endl;
	std::cout << "DOUBLE: " << static_cast<double>(num) << std::endl;
	std::cout << "FLOAT: " << static_cast<float>(num) << "f" << std::endl;
}

void printChar(std::string const &str) {
	char c = str[0];

	std::cout << "CHAR: " << c << std::endl;
	std::cout << "INT: " << static_cast<int>(c) << std::endl;
	std::cout << "DOUBLE: " << static_cast<double>(c) << std::endl;
	std::cout << "FLOAT: " << static_cast<float>(c) << "f" << std::endl;
}
