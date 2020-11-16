/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 10:18:58 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/16 14:59:35 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <string.h>
#include <iostream>

int main()
{
	ISquad* vlc = new Squad;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* jerry = new TacticalMarine;
	ISpaceMarine* jon = new AssaultTerminator;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jerry);
	vlc->push(jon);

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return 0;
}
