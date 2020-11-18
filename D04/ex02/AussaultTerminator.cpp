/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AussaultTerminator.cpp                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 10:17:57 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/16 14:13:45 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>
#include <string>

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	*this = src;
}

AssaultTerminator &		AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine *cpy = new AssaultTerminator(*this);
	return (cpy);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}
