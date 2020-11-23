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

//int main()
//{
//    //First we create a simple squad
//    Squad* original_squad = new Squad;
//    ISpaceMarine* bob = new TacticalMarine;
//    ISpaceMarine* jim = new AssaultTerminator;
//
//    original_squad->push(bob);
//    original_squad->push(jim);
//
//    //Second test the copy constructor
//    Squad* copied_squad = new Squad(*original_squad);
//    ISpaceMarine* jerry = new TacticalMarine;
//    ISpaceMarine* jon = new AssaultTerminator;
//
//    copied_squad->push(jerry);
//    copied_squad->push(jon);
//
//    //Third assign the first simple squad to the copied squad
//    *copied_squad = *original_squad;
//
//    //delete the squads and their content
//    delete original_squad;
//    delete copied_squad;
//    return 0;
//}

int main()
{
    ISquad* squad = new Squad;
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;

    squad->push(bob);
    squad->push(jim);

    for (int i = 0; i < squad->getCount(); ++i)
    {
        ISpaceMarine* cur = squad->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    delete squad;
    return 0;
}
