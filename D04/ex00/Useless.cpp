/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Useless.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:25:17 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/11 10:32:22 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include "Useless.hpp"
#include <iostream>

Useless::Useless() : Victim("USELESSEERER")
{
	std::cout << "Quack Quack" << std::endl;
}

Useless::Useless(std::string name) : Victim(name)
{
	std::cout << "Quack Quack" << std::endl;
}

Useless::Useless(Useless const &src)
{
	*this = src;
}

Useless &		Useless::operator=(Useless const &rhs)
{
	if (this != &rhs)
		this->_name = rhs._name;
	return (*this);
}

const std::string &	Useless::get_name() const
{
	return (this->_name);
}

void Useless::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a uselles green frog!" << std::endl;
}

std::ostream & operator<<(std::ostream & out, Useless const &src)
{
	out << "I am " << src.get_name() << " and I like frogs" << std::endl;
	return (out);
}

Useless::~Useless()
{
	std::cout << "No 9 lives, bad luck..." << std::endl;
}
