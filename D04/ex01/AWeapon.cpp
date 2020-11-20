/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:39:53 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/11 13:58:45 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <string>

AWeapon::AWeapon(void)
{

}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
_name(name), _apcost(apcost), _damage(damage)
{

}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;
}

AWeapon &		AWeapon::operator=(AWeapon const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_apcost = rhs._apcost;
		this->_damage = rhs._damage;
	}
	return (*this);
}

const std::string AWeapon::getName() const
{
	return (this->_name);
}

int AWeapon::getAPCost() const
{
	return (this->_apcost);
}

int AWeapon::getDamage() const
{
	return (this->_damage);
}


AWeapon::~AWeapon(void)
{

}
