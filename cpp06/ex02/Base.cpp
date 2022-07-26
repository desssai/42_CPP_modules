/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:31:55 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/26 16:53:40 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void) {
	return ;
}

Base * generate(void) {
	srand(time(NULL));
	int num = rand() % 3;
	Base* ptr = NULL;

	if (!num)
		ptr = new A();
	else if (num == 1)
		ptr = new B();
	else
		ptr = new C();
	return (ptr);
}

void identify(Base* p) {
	A* ptr1 = dynamic_cast<A*>(p);
	B* ptr2 = dynamic_cast<B*>(p);
	C* ptr3 = dynamic_cast<C*>(p);

	if (ptr1)
		std::cout << "The actual type is 'A' class." << std::endl;
	else if (ptr2)
		std::cout << "The actual type is 'B' class." << std::endl;
	else if (ptr3)
		std::cout << "The actual type is 'C' class." << std::endl;
}

void identify(Base& p) {
	try {
		A& ref1 = dynamic_cast<A&>(p);
		std::cout << "The actual type is 'A' class." << std::endl;
		(void)ref1;
	}
	catch (std::exception e) {
		;
	}
	try {
		B& ref1 = dynamic_cast<B&>(p);
		std::cout << "The actual type is 'B' class." << std::endl;
		(void)ref1;
	}
	catch (std::exception e) {
		;
	}
	try {
		C& ref1 = dynamic_cast<C&>(p);
		std::cout << "The actual type is 'C' class." << std::endl;
		(void)ref1;
	}
	catch (std::exception e) {
		;
	}
}
