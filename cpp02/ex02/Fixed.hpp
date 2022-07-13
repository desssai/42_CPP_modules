/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarob <ncarob@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:29:56 by ncarob            #+#    #+#             */
/*   Updated: 2022/07/13 03:00:47 by ncarob           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <string>

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
	bool	operator <	(Fixed const & other);
	bool	operator <=	(Fixed const & other);
	bool	operator >	(Fixed const & other);
	bool	operator >=	(Fixed const & other);
	bool	operator ==	(Fixed const & other);
	bool	operator !=	(Fixed const & other);

	Fixed	operator +	(Fixed const & other);
	Fixed	operator -	(Fixed const & other);
	Fixed	operator *	(Fixed const & other);
	Fixed	operator /	(Fixed const & other);

	Fixed	operator ++	(void);
	Fixed	operator ++	(int num);
	Fixed	operator --	(void);
	Fixed	operator --	(int num);

private:

	int					_int;
	static const int	_bits;

};

std::ostream& operator<<(std::ostream & o, Fixed const & fx);

#endif
