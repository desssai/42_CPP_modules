/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:29:56 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 19:37:28 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {

public:

	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed&	operator=(Fixed const & src);

private:

	int					_int;
	static const int	_bits;

};

#endif