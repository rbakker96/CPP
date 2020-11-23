/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:45:16 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/11 14:48:17 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const &src)
{
	*this = src;
}

PowerFist &		PowerFist::operator=(PowerFist const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
	}
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{

}
