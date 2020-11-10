/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 10:57:41 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/10 19:57:54 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include <string>
#include <iostream>

int		main(void)
{
	Sorcerer 	witch("THE WITCHER", "MONSTER HUNTER");
	Victim		vic_one("VIC THE VICTIM");
	Peon		vic_two;
	Peon		vic_three("A RANDOM PEON");

	//INTRODUCTIONS
	std::cout << std::endl;

	std::cout << "Sorcerer - " << witch;
	std::cout << "Victim - " << vic_one;
	std::cout << "Peone one - " << vic_two;
	std::cout << "Peon two - " << vic_three;

	std::cout << std::endl;

	//POLYMORPING
	witch.polymorph(vic_one);
	witch.polymorph(vic_two);
	witch.polymorph(vic_three);

	std::cout << std::endl;
}
