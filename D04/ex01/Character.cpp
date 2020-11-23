/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:47:13 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/12 15:35:44 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include <string>

Character::Character()
{

}

Character::Character(std::string const &name) : _name(name), _AP(40), _weapon(0)
{

}

Character::Character(Character const &src)
{
	*this = src;
}

Character &		Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_AP = rhs._AP;
		this->_weapon = rhs._weapon;
	}
	return (*this);
}

const std::string	Character::getName() const
{
	return (this->_name);
}

int	Character::getAP() const
{
	return (this->_AP);
}

const AWeapon *	Character::getWeapon() const
{
	return (this->_weapon);
}

const std::string	Character::getWeaponName() const
{
	return (this->_weapon->getName());
}

void	Character::recoverAP()
{
	if (this->_AP == 40)
		return ;
	else
	this->_AP += 10;
	if (this->_AP > 40)
		this->_AP = 40;
}

void	Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (_weapon == NULL || enemy->getHP() == 0)
		return ;
	if (_AP < _weapon->getAPCost()) {
	    std::cout << "Not enough AP for attack" << std::endl;
	    return ;
	}
	std::cout << _name << " attacks " << enemy->getType() << " with " << _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
	this->_AP -= _weapon->getAPCost();
}

std::ostream & operator<<(std::ostream & out, Character const &charachter)
{
	if (charachter.getWeapon())
		out << charachter.getName() << " has " << charachter.getAP() << " AP and wields a " << charachter.getWeaponName() << std::endl;
	else
		out << charachter.getName() << " has " << charachter.getAP() << " AP and is unarmed" << std::endl;
	return (out);
}

Character::~Character()
{

}
