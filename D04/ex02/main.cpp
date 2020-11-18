/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 13:24:12 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/17 13:24:12 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <iostream>

int main()
{
    Squad* squad = new Squad;
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    squad->push(bob);
    squad->push(jim);

//    Squad* second_squad = new Squad(*squad);
    Squad second_squad = *squad;
    ISpaceMarine* jerry = new TacticalMarine;
    ISpaceMarine* jon = new AssaultTerminator;

    second_squad.push(jerry);
    second_squad.push(jon);

//    delete squad;
 //   delete second_squad;
//    while(1){}
    return 0;
}

//int main()
//{
//    ISquad* squad = new Squad;
//    ISpaceMarine* bob = new TacticalMarine;
//    ISpaceMarine* jim = new AssaultTerminator;
//    ISpaceMarine* jerry = new TacticalMarine;
//    ISpaceMarine* jon = new AssaultTerminator;
//
//    squad->push(bob);
//    squad->push(jim);
//    squad->push(jerry);
//    squad->push(jon);
//
//    for (int i = 0; i < squad->getCount(); ++i)
//    {
//        ISpaceMarine* cur = squad->getUnit(i);
//        cur->battleCry();
//        cur->rangedAttack();
//        cur->meleeAttack();
//    }
//    delete squad;
//    return 0;
//}
