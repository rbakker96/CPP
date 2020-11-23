/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 10:58:49 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/10 20:02:18 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include <iostream>

Peon::Peon() : Victim("PEONEERER")
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src)
{
	*this = src;
}

Peon &		Peon::operator=(Peon const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

const std::string &	Peon::get_name() const
{
	return (this->_name);
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}

std::ostream & operator<<(std::ostream & out, Peon const &src)
{
	out << "I am " << src.get_name() << " and I like otters" << std::endl;
	return (out);
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}
