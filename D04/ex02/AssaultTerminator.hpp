/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.hpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 10:17:47 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/16 13:59:58 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_CLASS_H
#define ASSAULTTERMINATOR_CLASS_H
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

protected:

public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &src);
    virtual ~AssaultTerminator();

	AssaultTerminator & operator=(AssaultTerminator const &rhs);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
