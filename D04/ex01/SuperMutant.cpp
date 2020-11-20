/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:46:08 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/12 11:45:27 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &src)
{
	*this = src;
}

SuperMutant &		SuperMutant::operator=(SuperMutant const &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	(damage <= 3) ? damage = 0 : damage -= 3;
	if (this->_hp <= 0)
		return ;
	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
}
