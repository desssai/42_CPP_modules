/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:54:06 by ncarob            #+#    #+#             */
/*   Updated: 2022/10/01 16:20:53 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <algorithm>
# include <list>

class Span {

public:

	void			addNumber(int n);
	void			addNumber(int start, int delta, int count);
	unsigned int	longestSpan(void) const;
	unsigned int	shortestSpan(void) const;

	Span(void);
	Span(unsigned int num);
	Span(Span const & other);
	~Span(void);

	Span& operator = (Span const& other);

private:

	unsigned int	_num;
	std::list<int>	_lst;

};

#endif /* SPAN_H */