/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 10:17:21 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/16 13:59:21 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_CLASS_H
#define TACTICALMARINE_CLASS_H
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

protected:


public:
	TacticalMarine(void);
	TacticalMarine(TacticalMarine const &src);
    virtual ~TacticalMarine(void);

	TacticalMarine & operator=(TacticalMarine const &rhs);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
