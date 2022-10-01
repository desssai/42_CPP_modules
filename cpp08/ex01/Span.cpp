/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:55:02 by ncarob            #+#    #+#             */
/*   Updated: 2022/10/01 16:19:35 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void Span::addNumber(int n) {
	if (_lst.size() < static_cast<size_t>(_num))
		_lst.push_back(n);
	else
		throw std::out_of_range("The list is already full");
}

void Span::addNumber(int start, int delta, int count) {
	int j = start;
	
	for (int i = 0; i < count; ++i) {
		addNumber(j+=delta);
	}
}

unsigned int Span::longestSpan(void) const {
	if (_lst.size() < 2)
		throw std::out_of_range("There are less than two elements inside the list");
	return ((*std::max_element(_lst.begin(), _lst.end()) - *std::min_element(_lst.begin(), _lst.end())));
}

unsigned int Span::shortestSpan(void) const {
	if (_lst.size() < 2)
		throw std::out_of_range("There are less than two elements inside the list");

	unsigned int	res = UINT_MAX;
	unsigned int	temp;

	for (std::list<int>::const_iterator it1 = _lst.begin(); it1 != _lst.end(); ++it1) {
		for (std::list<int>::const_iterator it2 = _lst.begin(); it2 != _lst.end(); ++it2) {
			if (it1 != it2) {
				temp = std::max(*it2, *it1) - std::min(*it2, *it1);
				if (temp < res)
					res = temp;
			}
		}
	}
	return res;
}

Span::Span(void) : _num(0) {
	return ;
}

Span::Span(unsigned int num) : _num(num) {
	return ;
}

Span::Span(Span const & other) : _num(other._num), _lst(other._lst) {
	return ;
}

Span::~Span(void) {
	return ;
}

Span& Span::operator = (Span const& other) {
	_num = other._num;
	_lst.clear();
	_lst = other._lst;
	return *this;
}
