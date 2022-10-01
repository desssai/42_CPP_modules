/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 18:04:21 by ncarob            #+#    #+#             */
/*   Updated: 2022/09/30 18:18:25 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>

template <typename T>
typename T::const_iterator easyfind(T const & container, int a) {
	typename T::const_iterator iter = std::find(container.begin(), container.end(), a);
	if (iter == container.end())
		throw std::out_of_range("Could not find the number");
	return iter;
}

#endif /* EASYFIND_H */