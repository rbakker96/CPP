/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 10:16:43 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/16 11:28:05 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_CLASS_H
#define SQUAD_CLASS_H
#include "ISquad.hpp"

struct node
{
	ISpaceMarine *soldier;
	struct node *next;
};

class Squad : public ISquad
{

protected:
	node *head;

public:
	Squad(void);
	Squad(Squad const &src);
    virtual ~Squad(void);

	Squad & operator=(Squad const &rhs);

	int getCount() const;
	ISpaceMarine* getUnit(int n) const;
	int push(ISpaceMarine*);
};

#endif
