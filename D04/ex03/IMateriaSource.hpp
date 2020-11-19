/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbakker <rbakker@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:07:37 by rbakker       #+#    #+#                 */
/*   Updated: 2020/11/19 13:07:37 by rbakker       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_CLASS_H
#define IMATERIASOURCE_CLASS_H
#include <string>
#include "AMateria.hpp"

class IMateriaSource
{

public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
