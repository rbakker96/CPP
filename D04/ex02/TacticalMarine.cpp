/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 13:24:15 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/17 13:24:15 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>
#include <string>

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;
}

TacticalMarine &		TacticalMarine::operator=(TacticalMarine const &rhs)
{
//	if (this != &rhs)
//    *this = rhs;
    if (&rhs == this)
        return (*this);
	return (*this);
}

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine *cpy = new TacticalMarine(*this);
	return (cpy);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
}
