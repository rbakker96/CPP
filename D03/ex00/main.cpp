/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 08:32:08 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/12 20:24:16 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <string>
#include <iostream>

int		main(void)
{
	//Constructors
	FragTrap 	frag_one;
	FragTrap	frag_two("CU5TM-TP");

	//Assignation operator
	std::cout << '\n';
	frag_two = FragTrap("B4R-BOT");

	//Range attacks
	std::cout << '\n';
	frag_one.rangeAttack("Badass");
	frag_two.rangeAttack("Evil robot");

	//Melee attacks
	std::cout << '\n';
	frag_one.meleeAttack("Crazy guy");
	frag_two.meleeAttack("Bad boy");

	//Take damage
	std::cout << '\n';
	frag_one.takeDamage(150);
	frag_two.takeDamage(3);
	frag_two.takeDamage(30);
	frag_two.takeDamage(1);

	//Be repaired
	std::cout << '\n';
	frag_one.beRepaired(150);
	frag_one.beRepaired(50);
	frag_two.beRepaired(3);
	frag_two.beRepaired(30);

	//vaulthunter_dot_exe
	std::cout << '\n';
	frag_one.vaulthunter_dot_exe("Badass");
	frag_two.vaulthunter_dot_exe("Crazy bad boy");
	frag_one.vaulthunter_dot_exe("Badass");
	frag_one.vaulthunter_dot_exe("Badass");
	frag_one.vaulthunter_dot_exe("Badass");
	frag_one.vaulthunter_dot_exe("Badass");

	//Destructors
	std::cout << '\n';
}
