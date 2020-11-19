/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:07:17 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 13:07:17 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <string>
#include <iostream>

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice& src)
{
    *this = src;
}

Ice &		Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
        setXP(rhs.getXP());
    return (*this);
}

AMateria* Ice::clone() const
{
    AMateria* new_materia = new Ice;
    *new_materia = *this;
    return (new_materia);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{

}
