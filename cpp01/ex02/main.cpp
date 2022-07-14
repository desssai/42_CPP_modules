/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 15:05:20 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 16:24:39 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	std::string		var = "HI THIS IS BRAIN";
	std::string&	var_ref = var;
	std::string*	var_ptr = &var;

	std::cout << "-------------------------------------------------------------------------" << std::endl;
	std::cout << "|\tThe memory address of var:\t\t" << &var << "\t\t|" << std::endl;
	std::cout << "|\tThe memory address held by var_ref:\t" << &var_ref << "\t\t|" << std::endl;
	std::cout << "|\tThe memory address held by var_ptr:\t" << var_ptr << "\t\t|" << std::endl;
	std::cout << "-------------------------------------------------------------------------" << std::endl;
	std::cout << "|\tThe value of var:\t\t\t" << var << "\t|" << std::endl;
	std::cout << "|\tThe value pointed to by var_ref:\t" << var_ref << "\t|" << std::endl;
	std::cout << "|\tThe value pointed to by var_ptr:\t" << *var_ptr << "\t|" << std::endl;
	std::cout << "-------------------------------------------------------------------------" << std::endl;
	return (0);
}
