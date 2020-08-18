/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 08:32:08 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/18 17:38:52 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>

int		main(void)
{
	srand (time(NULL));
	//Constructors
	FragTrap 	frag_one;
	FragTrap	frag_two("CU5TM-TP");
	std::cout << '\n';
	ScavTrap	scav_one;
	ScavTrap	scav_two("VR-0N1CA");

	//Assignation operator
	std::cout << '\n' << '\n';
	frag_two = FragTrap("FR4G-TP");
	std::cout << '\n';
	scav_two = ScavTrap("SC4V-TP");

	//Range attacks
	std::cout << '\n' << '\n';
	frag_one.rangeAttack("LEADER");
	frag_two.rangeAttack("SOLDIER");
	std::cout << '\n';
	scav_one.rangeAttack("LEADER");
	scav_two.rangeAttack("SOLDIER");

	//Melee attacks
	std::cout << '\n' << '\n';
	frag_one.meleeAttack("LEADER");
	frag_two.meleeAttack("SOLDIER");
	std::cout << '\n';
	scav_one.meleeAttack("LEADER");
	scav_two.meleeAttack("SOLDIER");

	//Take damage
	std::cout << '\n' << '\n';
	frag_one.takeDamage(150);
	frag_two.takeDamage(3);
	frag_two.takeDamage(30);
	frag_two.takeDamage(1);
	std::cout << '\n';
	scav_one.takeDamage(110);
	scav_two.takeDamage(40);
	scav_two.takeDamage(2);

	//Be repaired
	std::cout << '\n' << '\n';
	frag_one.beRepaired(150);
	frag_one.beRepaired(50);
	frag_two.beRepaired(3);
	frag_two.beRepaired(30);
	std::cout << '\n';
	scav_one.beRepaired(101);
	scav_one.beRepaired(45);
	scav_two.beRepaired(23);

	//vaulthunter_dot_exe
	std::cout << '\n' << '\n';
	frag_one.vaulthunter_dot_exe("LEADER");
	frag_two.vaulthunter_dot_exe("SOLDIER");
	frag_one.vaulthunter_dot_exe("LEADER");
	frag_one.vaulthunter_dot_exe("LEADER");
	frag_one.vaulthunter_dot_exe("LEADER");
	frag_one.vaulthunter_dot_exe("LEADER");

	//challengeNewcomer
	std::cout << '\n' << '\n';
	scav_one.challengeNewcomer("LEADER");
	scav_two.challengeNewcomer("SOLDIER");
	scav_one.challengeNewcomer("LEADER");
	scav_one.challengeNewcomer("LEADER");

	//Destructors
	std::cout << '\n' << '\n';
}
