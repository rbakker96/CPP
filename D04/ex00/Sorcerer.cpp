/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 10:58:01 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/05 17:42:21 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>
#include <string>
#include <array>

// Sorcerer::Sorcerer(void)
// {
// 	return ;
// }

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
	return ;
}

Sorcerer &		Sorcerer::operator=(Sorcerer const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_title = rhs._title;
	}
	return (*this);
}

Sorcerer::~Sorcerer(void)
{
std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}
