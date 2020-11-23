/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:46:39 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/12 13:56:30 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &src)
{
	*this = src;
}

RadScorpion &		RadScorpion::operator=(RadScorpion const &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}
