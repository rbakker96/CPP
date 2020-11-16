/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ISpaceMarine.hpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 10:18:12 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/13 10:25:01 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_CLASS_H
#define ISPACEMARINE_CLASS_H

class ISpaceMarine
{

public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;

};

#endif
