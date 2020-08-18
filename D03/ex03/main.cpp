/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 08:32:08 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/18 17:56:52 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <string>
#include <iostream>


int		main(void)
{
	srand (time(NULL));
	//support
	FragTrap 	frag;
	ScavTrap	scav;

	//Constructors
	std::cout << '\n' << '\n';
	NinjaTrap	ninja_one;
	NinjaTrap	ninja_two("RT-FC");

	//Assignation operator
	std::cout << '\n' << '\n';
	ninja_two = NinjaTrap("N3-JA");

	//Range attacks
	std::cout << '\n' << '\n';
	ninja_one.rangeAttack("LEADER");
	ninja_two.rangeAttack("SOLDIER");

	//Melee attacks
	std::cout << '\n' << '\n';
	ninja_one.meleeAttack("LEADER");
	ninja_two.meleeAttack("SOLDIER");

	//Take damage
	std::cout << '\n' << '\n';
	ninja_one.takeDamage(150);
	ninja_two.takeDamage(3);
	ninja_two.takeDamage(30);
	ninja_two.takeDamage(1);

	//Be repaired
	std::cout << '\n' << '\n';
	ninja_one.beRepaired(150);
	ninja_one.beRepaired(50);
	ninja_two.beRepaired(3);
	ninja_two.beRepaired(30);

	//ninjaShoebox
	std::cout << '\n' << '\n';
	ninja_one.ninjaShoebox(scav);
	ninja_two.ninjaShoebox(frag);
	ninja_two.ninjaShoebox(ninja_one);

	//Destructors
	std::cout << '\n' << '\n';
}
