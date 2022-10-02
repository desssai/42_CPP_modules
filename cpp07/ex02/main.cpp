/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:04:11 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/27 18:26:27 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
    {
        std::cout << "EMPTY ARRAY TEST" << std::endl;
        
        Array<int> const arr1;
        Array<int> arr2;
        std::cout << "ARRAY 1's SIZE IS: " << arr1.size() << std::endl;
        std::cout << "ARRAY 2's SIZE IS: " << arr2.size() << std::endl;
    }
    {
        std::cout << "NON-EMPTY ARRAY TEST INT" << std::endl;
        
        Array<int> arr1(6);
        Array<int> arr2(1);
        std::cout << "ARRAY 1's SIZE IS: " << arr1.size() << ": ";
        for (size_t i = 0; i < arr1.size(); i++) {
            std::cout << arr1[i] << " ";
        }
        for (size_t i = 0; i < arr1.size(); i++) {
            arr1[i] = 10 + i;
        }
        std::cout << std::endl;
        std::cout << "ARRAY 1's SIZE IS: " << arr1.size() << ": ";
        for (size_t i = 0; i < arr1.size(); i++) {
            std::cout << arr1[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "ARRAY 2's SIZE IS: " << arr2.size() << std::endl;
    }
    {
        std::cout << "NON-EMPTY ARRAY TEST FLOAT" << std::endl;
        
        Array<float> arr1(6);
        Array<float> arr2(1);
        std::cout << "ARRAY 1's SIZE IS: " << arr1.size() << ": ";
        for (size_t i = 0; i < arr1.size(); i++) {
            std::cout << arr1[i] << " ";
        }
        for (size_t i = 0; i < arr1.size(); i++) {
            arr1[i] = static_cast<float>(i + 1.1f);
        }
        std::cout << std::endl;
        std::cout << "ARRAY 1's SIZE IS: " << arr1.size() << ": ";
        for (size_t i = 0; i < arr1.size(); i++) {
            std::cout << arr1[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "ARRAY 2's SIZE IS: " << arr2.size() << std::endl;
    }
    {
        std::cout << "NON-EMPTY ARRAY TEST STRING" << std::endl;
        
        ::Array<std::string> arr1(3);
        ::Array<std::string> arr2(0);
        std::cout << "ARRAY 1's SIZE IS: " << arr1.size() << ": ";
        for (size_t i = 0; i < arr1.size(); i++) {
            std::cout << arr1[i] << " ";
        }
        for (size_t i = 0; i < arr1.size(); i++) {
            arr1[i] = "HELLO";
        }
        std::cout << std::endl;
        std::cout << "ARRAY 1's SIZE IS: " << arr1.size() << ": ";
        for (size_t i = 0; i < arr1.size(); i++) {
            std::cout << arr1[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "ARRAY 2's SIZE IS: " << arr2.size() << std::endl;

        std::cout << "COPY ARRAY TEST STRING" << std::endl;
        std::cout << "ARRAY 1's SIZE IS: " << arr1.size() << ": ";
        for (size_t i = 0; i < arr1.size(); i++) {
            std::cout << arr1[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "ARRAY 2's SIZE IS: " << arr2.size() << std::endl;
        arr1 = arr2;
        std::cout << "ARRAY 1's SIZE IS: " << arr1.size() << ": ";
        for (size_t i = 0; i < arr1.size(); i++) {
            std::cout << arr1[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "ARRAY 2's SIZE IS: " << arr2.size() << std::endl;
    }
    {
           std::cout << "OUT OF RANGE TEST 1" << std::endl;
           try {
               Array<int> f;

               f[-1];
           }
           catch (std::exception &e) {
               std::cerr << e.what() << std::endl;
           }
           std::cout << "OUT OF RANGE TEST 2" << std::endl;
           try {
               Array<int> f;

               f[1];
           }
           catch (std::exception &e) {
               std::cerr << e.what() << std::endl;
           }
    }
    
    return (0);
}