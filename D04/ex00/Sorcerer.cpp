/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 10:58:01 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/10 20:04:04 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer()
{

}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;
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
	out << "I am " << src.get_name() << ", " << src.get_title() << ", and I like ponies" << std::endl;
	return (out);
}

Sorcerer::~Sorcerer()
{
std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}
