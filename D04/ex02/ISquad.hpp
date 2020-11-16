/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISquad.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 10:18:49 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/16 11:16:03 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_CLASS_H
#define ISQUAD_CLASS_H
#include "ISpaceMarine.hpp"

class ISquad
{

public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int n) const = 0;
	virtual int push(ISpaceMarine*) = 0;

};

#endif
