/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 12:50:16 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 12:50:16 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void)
{

}

AMateria::AMateria(const std::string& type) : _xp(0), _type(type)
{

}

AMateria::AMateria(const AMateria& src)
{
    *this = src;
}

AMateria &		AMateria::operator=(AMateria const &rhs) //type is const
{
    if (this != &rhs)
        this->_xp = rhs._xp;
    return (*this);
}

const std::string& AMateria::getType() const //done
{
    return (this->_type);
}

unsigned int AMateria::getXP() const //done
{
    return (this->_xp);
}

void AMateria::setXP(unsigned int new_xp)
{
    _xp = new_xp;
}

void AMateria::use(ICharacter& target)
{
    _xp += 10;
    std::cout << target.getName() << " won't be hurt" << std::endl;
}

AMateria::~AMateria(void)
{

}