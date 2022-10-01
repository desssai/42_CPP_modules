/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:03:49 by ncarob            #+#    #+#             */
/*   Updated: 2022/09/30 18:35:07 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main(void) {
	{
		std::list<int> my_list;
		std::list<int>::const_iterator it1;

		for (int i = 0; i < 10001; i++) {
			my_list.push_front(i);
		}
		for (int i = 5000; i >= 3000; i -= 1000) {
			try {
				it1 = easyfind(my_list, i);
				std::cout << "The number we have found is: " << *it1 << std::endl;
			}
			catch (std::out_of_range &e) {
				std::cout << e.what() << std::endl;
			}
		}
		for (int i = 4000; i >= -1000; i -= 1000) {
			try {
				it1 = easyfind(my_list, i);
				std::cout << "The number we have found is: " << *it1 << std::endl;
			}
			catch (std::out_of_range &e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
	{
		std::vector<int> my_vect;
		std::vector<int>::const_iterator it2;

		for (int i = 0; i < 10001; i++) {
			my_vect.push_back(i);
		}
		for (int i = 0; i < 12000; i += 1000) {
			try {
				it2 = easyfind(my_vect, i);
				std::cout << "The number we have found is: " << *it2 << std::endl;
			}
			catch (std::out_of_range &e) {
				std::cout << e.what() << std::endl;
			}
		}
	}
	return 0;
}