/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:07:44 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 13:07:44 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include <string>

MateriaSource::MateriaSource() : _used_srcs(0)
{
    for (int i = 0; i < 4; i++)
       _materia_srcs[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
    *this = src;
}

MateriaSource &		MateriaSource::operator=(MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < _used_srcs; i++)
            delete _materia_srcs[i];
        _used_srcs = rhs._used_srcs;
        for (int i = 0; i < 4; i++)
            _materia_srcs[i] = NULL;
        for (int i = 0; i < _used_srcs; i++)
            _materia_srcs[i] = rhs._materia_srcs[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
   if (_used_srcs == 4) {
       std::cout << "Materia srcs are full, you're done learning!" << std::endl;
       return ;
   }
   _materia_srcs[_used_srcs] = materia;
   _used_srcs++;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < _used_srcs; i++) {
        if (_materia_srcs[i]->getType() == type)
            return (_materia_srcs[i]->clone());
    }
    return NULL;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < _used_srcs; i++)
        delete _materia_srcs[i];
}