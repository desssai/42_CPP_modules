/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:03:35 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/26 15:36:58 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void printFloat(std::string const &str);
void printDouble(std::string const &str);
void printInteger(std::string const &str);
void printChar(std::string const &str);

/************************/
/*	-1	--> ERROR		*/
/*	0	--> CHAR		*/
/*	1	--> INT			*/
/*	2	--> DOUBLE		*/
/*	3	--> FLOAT		*/
/************************/

int checkType(std::string const &str) {
	int i = 0;
	int	d = 0;

	if (str[i] == 43 || str[i] == 45)
		i++;
	while (isdigit(str[i]))
		i++;
	if (!str[i])
		return (1);
	if (str[i] == '.') {
		i++;
		d++;
	}
	while (isdigit(str[i]))
		i++;
	if (!str[i])
		return (2);
	if (str[i] == 'f' && d && !str[i + 1])
		return (3);
	return (-1);
}

int getType(std::string const &str) {
	if (!str.length())
		return (-1);
	else if (str.length() == 1 && isprint(str[0]) && !isdigit(str[0]))
		return (0);
	else if (str == "-inf" || str == "+inf" || str == "inf" || str == "nan")
		return (2);
	else if (str == "-inff" || str == "+inff" || str == "inff" || str == "nanf")
		return (3);
	else 
		return (checkType(str));
}

void convert(std::string const &str) {
	int		type = getType(str);
	try {
		std::cout << std::fixed;
		switch (type) {
			case 3:
				printFloat(str);
				break ;
			case 2:
				printDouble(str);
				break ;
			case 1:
				printInteger(str);
				break ;
			case 0:
				printChar(str);
				break ;
			default:
				std::cout << "Error: Unknown Value." << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << "." << std::endl;
	}
}

int main(int const argc, char** const argv) {
	(argc == 2) ? convert(static_cast<std::string>(argv[1])) : (void)(std::cout << "Error: no input." << std::endl);
	return (0);
}