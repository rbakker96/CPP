/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:45:42 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/13 13:16:29 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <string>

Enemy::Enemy(void)
{

}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{

}

Enemy::Enemy(Enemy const &src)
{
	*this = src;
}

Enemy &		Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}

const std::string Enemy::getType() const
{
	return (this->_type);
}

int Enemy::getHP() const
{
	return (this->_hp);
}

void	Enemy::takeDamage(int damage)
{
	if (this->_hp <= 0)
		return ;
	this->_hp -= damage;
	if (this->_hp < 0)
		this->_hp = 0;
}

Enemy::~Enemy(void)
{

}
