/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:29:56 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/14 20:44:39 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

public:

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed& min(Fixed & a, Fixed & b);
	static Fixed& max(Fixed & a, Fixed & b);
	static Fixed const & min(Fixed const & a, Fixed const & b);
	static Fixed const & max(Fixed const & a, Fixed const & b);

	Fixed(void);
	Fixed(const int num);
	Fixed(const float num);
	Fixed(Fixed const & other);
	~Fixed(void);

	Fixed&	operator =	(Fixed const & other);
	bool	operator <	(Fixed const & other) const;
	bool	operator <=	(Fixed const & other) const;
	bool	operator >	(Fixed const & other) const;
	bool	operator >=	(Fixed const & other) const;
	bool	operator ==	(Fixed const & other) const;
	bool	operator !=	(Fixed const & other) const;

	Fixed	operator +	(Fixed const & other) const;
	Fixed	operator -	(Fixed const & other) const;
	Fixed	operator *	(Fixed const & other) const;
	Fixed	operator /	(Fixed const & other) const;

	Fixed	operator ++	(void);
	Fixed	operator ++	(int);
	Fixed	operator --	(void);
	Fixed	operator --	(int);

private:

	int					_int;
	static const int	_bits;

};

std::ostream& operator<<(std::ostream & o, Fixed const & fx);

#endif
