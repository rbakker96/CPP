/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 08:32:08 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/18 17:14:46 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"
#include <string>
#include <iostream>

int		main(void)
{
	srand (time(NULL));

	//support
	FragTrap	frag;
	std::cout << '\n';
	ScavTrap	scav;
	std::cout << '\n';
	NinjaTrap	ninja;

	//Constructors
	std::cout << '\n' << '\n';
	SuperTrap 	super_one;
	std::cout << '\n';
	SuperTrap	super_two("Superman");


	//Assignation operator
	std::cout << '\n' << '\n';
	super_two = SuperTrap("Batman");


	//Range attacks
	std::cout << '\n' << '\n';
	super_one.rangeAttack("SOLDIER");
	std::cout << '\n';
	super_two.rangeAttack("LEADER");


	//Melee attacks
	std::cout << '\n' << '\n';
	super_one.meleeAttack("SOLDIER");
	std::cout << '\n';
	super_two.meleeAttack("LEADER");


	//Take damage
	std::cout << '\n' << '\n';
	super_one.takeDamage(150);
	std::cout << '\n';
	super_two.takeDamage(3);
	super_two.takeDamage(30);


	//Be repaired
	std::cout << '\n' << '\n';
	super_one.beRepaired(150);
	super_one.beRepaired(50);


	//vaulthunter_dot_exe
	std::cout << '\n' << '\n';
	super_one.vaulthunter_dot_exe("SOLDIER");
	std::cout << '\n';
	super_two.vaulthunter_dot_exe("LEADER");


	//ninjaShoebox
	std::cout << '\n' << '\n';
	super_one.ninjaShoebox(frag);
	std::cout << '\n';
	super_two.ninjaShoebox(scav);
	std::cout << '\n';
	super_one.ninjaShoebox(ninja);

	//Destructors
	std::cout << '\n' << '\n';
}


