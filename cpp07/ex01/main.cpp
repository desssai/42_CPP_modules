/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:01:25 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/27 17:31:45 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(float &a) {
    a++;
}

void increment(int &a) {
    a++;
}

int main(void) {
    {
        std::cout << "TESTS FOR FLOAT." << std::endl;
        float array[5] =  {0.0f, 0.1f, 0.2f, 0.3f, 0.4f};
        iter(array, 5, &printout);
        std::cout << "----------------" << std::endl;
        iter(array, 5, &increment);
        iter(array, 5, &printout);
    }
    {
        std::cout << "TESTS FOR INT." << std::endl;
        int array[5] =  {0, 1, 2, 3, 4};
        iter(array, 5, &printout);
        std::cout << "--------------" << std::endl;
        iter(array, 5, &increment);
        iter(array, 5, &printout);
    }
    {
        std::cout << "TESTS FOR STRING." << std::endl;
        std::string array[5] = {"HELLO", "MY", "NAME", "IS", "IGOR"};
        iter(array, 5, &printout);
        std::cout << "-----------------" << std::endl;
        iter(array, 3, &printout);
        std::cout << "-----------------" << std::endl;
        iter(array, 0, &printout);
        std::cout << "-----------------" << std::endl;
    }
    return (0);
}