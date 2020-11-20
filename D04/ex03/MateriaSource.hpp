/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:07:51 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 13:07:51 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_H
#define MATERIASOURCE_CLASS_H
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{

protected:
    AMateria    *_materia_srcs[4];
    int         _used_srcs;

public:
    MateriaSource();
    MateriaSource(const MateriaSource& src);
    virtual ~MateriaSource();

    MateriaSource & operator=(MateriaSource const &rhs);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};

#endif