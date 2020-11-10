/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 10:58:34 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/10 19:54:42 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>
#include <string>
#include <array>

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(Victim const &src)
{
	*this = src;
	return ;
}

Victim &		Victim::operator=(Victim const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

const std::string &	Victim::get_name() const
{
	return (this->_name);
}

void Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator<<(std::ostream & out, Victim const &src)
{
	out << "I am " << src.get_name() << " and I like otters" << std::endl;
	return (out);
}

Victim::~Victim(void)
{
std::cout << "Victim " << this->_name <<  " just died for no apparent reason!!" << std::endl;
	return ;
}
