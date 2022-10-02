/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:02:23 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/27 17:31:39 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>
# include <string>

template <typename T>
void    iter(T *ptr, unsigned int length, void (*f)(T &temp)) {
    for (unsigned int i = 0; i < length; i++) {
        f(ptr[i]);
    }
}

template <typename T>
void    printout(T &temp) {
    std::cout << temp << std::endl;
}

#endif