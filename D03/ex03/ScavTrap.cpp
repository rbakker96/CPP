/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 10:25:00 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/17 14:04:32 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>
#include <array>

ScavTrap::ScavTrap(void) : 	ClapTrap()
{
	this->_hit_pts = 100;
	this->_max_hit_pts = 100;
	this->_energy_pts = 50;
	this->_max_energy_pts = 50;
	this->_level = 1;
	this->_name = "SC4V-TP";
	this->_melee_attack_dmg = 20;
	this->_ranged_attack_dmg = 15;
	this->_armor_dmg_reduction = 3;

	std::cout << "[" << this->_name << "]";
	std::cout << " -- Let's get this party started!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	this->_hit_pts = 100;
	this->_max_hit_pts = 100;
	this->_energy_pts = 50;
	this->_max_energy_pts = 50;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_dmg = 20;
	this->_ranged_attack_dmg = 15;
	this->_armor_dmg_reduction = 3;

	std::cout << "[" << this->_name << "]";
	std::cout << " -- Look out everybody! Things are about to get awesome!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "[" << this->_name << "]";
	std::cout << "I'm pulling tricks outta my hat!" << std::endl;
	*this = src;
	return ;
}

ScavTrap &		ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- You can't just program this level of excitement!" << std::endl;
	if (this != &rhs)
	{
		this->_hit_pts = rhs._hit_pts;
		this->_max_hit_pts = rhs._max_hit_pts;
		this->_energy_pts = rhs._energy_pts;
		this->_max_energy_pts = rhs._max_energy_pts;
		this->_level = rhs._level;
		this->_name = rhs._name;
		this->_melee_attack_dmg = rhs._melee_attack_dmg;
		this->_ranged_attack_dmg = rhs._ranged_attack_dmg;
		this->_armor_dmg_reduction = rhs._armor_dmg_reduction;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- Why did they build me out of galvanized flesh?!. I'm only level " << this->_level <<std::endl;
	return ;
}


void		ScavTrap::challengeNewcomer(std::string const & target)
{
	if (this->_max_energy_pts >= this->_energy_pts)
	{
		std::array<std::string, 5> challenges = {
		"\nI challenge you to a dance battle, but beware you won't have a chance against my sick moves!",
		"\nI challenge you to a karaoke sing off, stay sharp if you snooze you lose!",
		"\nI challenge you to oilpong, your parts will not be able to handle all that oil!",
		"\nI challenge you to dodge all my bullets from my bullets tornado, you probably don't and die",
		"\nI challenge you to outrun my bullets, so you better start running my friend!" };

		std::cout << challenges[rand() % 5] << std::endl;
		std::cout << "[" << this->_name << "]" << " -- That hit " << target << " hard! Causing 33 hp damage" << std::endl;
	}
	return ;
}
