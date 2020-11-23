/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 11:45:46 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/12 15:29:03 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include <iostream>

//int main()
//{
//	Character* me = new Character("me");
//	std::cout << *me;
//
//	Enemy* b = new RadScorpion();
//    Enemy* a = new SuperMutant();
//    Enemy* c = new RadScorpion();
//	AWeapon* pr = new PlasmaRifle();
//	AWeapon* pf = new PowerFist();
//
//	me->equip(pr);
//	std::cout << *me;
//	me->equip(pf);
//	me->attack(b);
//    std::cout << *me;
//    me->attack(b);
//    std::cout << *me;
//    me->attack(a);
//    me->recoverAP();
//    me->recoverAP();
//    std::cout << *me;
//    me->attack(a);
//    std::cout << *me;
//    me->attack(a);
//    std::cout << *me;
//    me->attack(a);
//    std::cout << *me;
//    me->attack(a);
//    std::cout << *me;
//    me->attack(c);
//    me->recoverAP();
//    std::cout << *me;
//    me->attack(c);
//    me->recoverAP();
//    std::cout << *me;
//    me->attack(c);
//
//	return 0;
//}

int main()
{
    Character* me = new Character("me");
    std::cout << *me;

    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    me->equip(pr); std::cout << *me; me->equip(pf);
    me->attack(b);

    std::cout << *me; me->equip(pr); std::cout << *me; me->attack(b); std::cout << *me;

    me->attack(b); std::cout << *me;

    return 0;
}
