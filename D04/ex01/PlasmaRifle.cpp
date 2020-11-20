/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:44:22 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/11 14:27:56 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src)
{
	*this = src;
}

PlasmaRifle &		PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
	}
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle(void)
{

}
