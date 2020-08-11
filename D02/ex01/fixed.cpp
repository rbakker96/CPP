/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/11 10:26:11 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/11 17:56:48 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "fixed.hpp"
#include <cmath>

const int Fixed::_fractional_bits = 8;

Fixed::Fixed(void) : _fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed_point_value = n * (1 << _fractional_bits);

	return ;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed_point_value = roundf(n * (1 << _fractional_bits));

	return ;
}

Fixed &	Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point_value = rhs.getRawBits();

	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixed_point_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixed_point_value = raw;
	return ;
}

std::ostream & operator<<(std::ostream & out, Fixed const & in)
{
	out << in.toFloat();
	return (out);
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(_fixed_point_value) / (1 << _fractional_bits));
}

int Fixed::toInt( void ) const
{
	return (_fixed_point_value / (1 << _fractional_bits));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}
