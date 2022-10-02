/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:12:58 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/27 16:47:40 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>
# include <string>

template <typename T>
void swap(T &a, T &b) {
    T temp = b;

    b = a;
    a = temp;
}

template <typename T>
T const &min(T const &a, T const &b) {
    return (a >= b ? b : a);
}

template <typename T>
T const &max(T const &a, T const &b) {
    return (a <= b ? b : a);
}

#endif