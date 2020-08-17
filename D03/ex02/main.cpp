/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 08:32:08 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/17 14:43:10 by roybakker     ########   odam.nl         */
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
	ScavTrap	scav_one;
	ScavTrap	scav_two("VR-0N1CA");

	//Assignation operator
	std::cout << '\n';
	frag_two = FragTrap("B4R-BOT");
	scav_two = ScavTrap("DAN-TRP");

	//Range attacks
	std::cout << '\n';
	frag_one.rangeAttack("Badass");
	frag_two.rangeAttack("Evil robot");
	scav_one.rangeAttack("Big Doug");
	scav_two.rangeAttack("Angry Grigor");

	//Melee attacks
	std::cout << '\n';
	frag_one.meleeAttack("Crazy guy");
	frag_two.meleeAttack("Bad boy");
	scav_one.meleeAttack("Juicy Jon");
	scav_two.meleeAttack("Big Rick");

	//Take damage
	std::cout << '\n';
	frag_one.takeDamage(150);
	frag_two.takeDamage(3);
	frag_two.takeDamage(30);
	frag_two.takeDamage(1);
	scav_one.takeDamage(110);
	scav_two.takeDamage(40);
	scav_two.takeDamage(2);

	//Be repaired
	std::cout << '\n';
	frag_one.beRepaired(150);
	frag_one.beRepaired(50);
	frag_two.beRepaired(3);
	frag_two.beRepaired(30);
	scav_one.beRepaired(101);
	scav_one.beRepaired(45);
	scav_two.beRepaired(23);

	//vaulthunter_dot_exe
	std::cout << '\n';
	frag_one.vaulthunter_dot_exe("Badass");
	frag_two.vaulthunter_dot_exe("Crazy bad boy");
	frag_one.vaulthunter_dot_exe("Badass");
	frag_one.vaulthunter_dot_exe("Badass");
	frag_one.vaulthunter_dot_exe("Badass");
	frag_one.vaulthunter_dot_exe("Badass");

	//challengeNewcomer
	std::cout << '\n';
	scav_one.challengeNewcomer("Big Doug");
	scav_two.challengeNewcomer("Slick Rick");
	scav_one.challengeNewcomer("Green Bean");
	scav_one.challengeNewcomer("Red Lobster");

	//Destructors
	std::cout << '\n';
}
