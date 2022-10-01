/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:26:05 by ncarob            #+#    #+#             */
/*   Updated: 2022/10/01 23:10:53 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>
# include <deque>

template <typename T>
class MutantStack : public std::stack<T> {

public:

	MutantStack(void);
	MutantStack(std::stack<T> const& other);
	virtual ~MutantStack();

	MutantStack<T> &operator = (MutantStack<T> const& other);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void);
	iterator end(void);
};

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() {
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(std::stack<T> const & other) : std::stack<T>(other) {
	return ;
}

template <typename T>
MutantStack<T>::~MutantStack() {
	return ;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator = (MutantStack<T> const& other) {
	this->c = other.c;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {
	return this->c.end();
}

#endif /* MUTANTSTACK_H */