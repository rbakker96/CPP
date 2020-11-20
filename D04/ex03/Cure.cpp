/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:07:05 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 13:07:05 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(Cure const &src)
{
    *this = src;
}

Cure &		Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
        setXP(rhs.getXP());
    return (*this);
}

AMateria* Cure::clone() const
{
    AMateria* new_materia = new Cure;
    *new_materia = *this;
    return (new_materia);
}

void Cure::use(ICharacter& target)
{
    setXP(getXP() + 10);
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{

}