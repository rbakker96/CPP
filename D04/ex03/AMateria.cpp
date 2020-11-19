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

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(void)
{

}

AMateria::AMateria(const std::string& type) : _type(type), _xp(0)
{

}

AMateria::AMateria(const AMateria& src)
{
    *this = src;
}

AMateria &		AMateria::operator=(AMateria const &rhs) //type is const
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
        this->_xp = rhs._xp;
    }
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
    this->_xp += 10;
}

AMateria::~AMateria(void)
{

}