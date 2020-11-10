/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 10:58:01 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/09 16:00:01 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>
#include <string>
#include <array>

Sorcerer::Sorcerer(void)
{
	return ;
}

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

void Sorcerer::polymorph(Victim const &target) const
{
	target.getPolymorphed();
}

const std::string &	Sorcerer::get_title() const
{
	return (this->_title);
}

const std::string &	Sorcerer::get_name() const
{
	return (this->_name);
}

std::ostream & operator<<(std::ostream & out, Sorcerer const &src)
{
	out << "I am " << src.get_title() << src.get_name() << ", and I like ponies" << std::endl;
	return (out);
}

Sorcerer::~Sorcerer(void)
{
std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}
