/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 10:26:04 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/11 11:26:01 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

class Fixed {

public:

    Fixed(void);
	Fixed(Fixed const &src);
    ~Fixed(void);

	Fixed 		&operator=(Fixed const &rhs);
	int			getRawBits(void) const;
	void		setRawBits(int const raw);

private:
	static const int	_fractional_bits;
	int					_fixed_point_value;

};

#endif
