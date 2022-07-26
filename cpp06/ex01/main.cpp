/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:55:15 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/26 16:27:47 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

uintptr_t serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main(void) {
	Data		data;
	uintptr_t	ptr1;
	Data*		ptr2;

	data.number = 10;
	ptr1 = serialize(&data);
	ptr2 = deserialize(ptr1);
	std::cout << ptr2->number << std::endl;
}