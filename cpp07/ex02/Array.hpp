/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:34:09 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/27 18:27:18 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <exception>
# include <iostream>
# include <string>

template <typename T>
class Array {
    
public:
    Array(void);
    Array(unsigned int n);
    Array(Array const &copy);
    ~Array(void);

    size_t  size(void) const;

    Array& operator = (Array const &copy);
    T&     operator [] (size_t index);
    T&     operator [] (size_t index) const;

private:
    T*      _ptr;
    size_t  _size;

};

template <typename T>
Array<T>::Array(void) : _ptr(NULL), _size(0) {
    return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(static_cast<size_t>(n)) {
    _ptr = new T[_size];
}

template <typename T>
Array<T>::Array(Array<T> const &copy) {
    *this = copy;
}

template <typename T>
Array<T>& Array<T>::operator = (Array<T> const &copy) {
    if (this != &copy) {
        _size = copy.size();
        if (_ptr)
            delete [] _ptr;
        _ptr = new T[_size];
        for (size_t i = 0; i < _size; i++) {
            _ptr[i] = copy[i];
        }
    }
    return (*this);
}

template <typename T>
T& Array<T>::operator [] (size_t index) {
    if (index < 0 || index > _size)
        throw (std::out_of_range::exception());
    return (_ptr[index]);
}

template <typename T>
T& Array<T>::operator [] (size_t index) const {
    if (index < 0 || index > _size)
        throw (std::out_of_range::exception());
    return (_ptr[index]);
}

template <typename T>
Array<T>::~Array(void) {
    delete [] _ptr;
}

template <typename T>
size_t Array<T>::size(void) const {
    return (_size);
}

#endif