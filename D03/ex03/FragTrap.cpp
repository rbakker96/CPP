/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 08:32:37 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/17 14:29:38 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
#include <string>
#include <array>

FragTrap::FragTrap(void) : 	ClapTrap()
{
	this->_hit_pts = 100;
	this->_max_hit_pts = 100;
	this->_energy_pts = 100;
	this->_max_energy_pts = 100;
	this->_level = 1;
	this->_name = "FR4G-TP";
	this->_melee_attack_dmg = 30;
	this->_ranged_attack_dmg = 20;
	this->_armor_dmg_reduction = 5;

	std::cout << "[" << this->_name << "]";
	std::cout << " -- If I had veins, they'd be popping out right now!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap()
{
	this->_hit_pts = 100;
	this->_max_hit_pts = 100;
	this->_energy_pts = 100;
	this->_max_energy_pts = 100;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_dmg = 30;
	this->_ranged_attack_dmg = 20;
	this->_armor_dmg_reduction = 5;

	std::cout << "[" << this->_name << "]";
	std::cout << " -- Tell me I'm the prettiest!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "[" << this->_name << "]";
	std::cout << "I'm pulling tricks outta my hat!" << std::endl;
	*this = src;
	return ;
}

FragTrap &		FragTrap::operator=(FragTrap const &rhs)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- It's about to get magical!" << std::endl;
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

FragTrap::~FragTrap(void)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- I can't feel my fingers! Gah! I don't have any fingers. I'm only level " << this->_level <<std::endl;
	return ;
}


void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	this->_energy_pts -= 25;
	if (this->_energy_pts >= 0 && this->_energy_pts <= this->_max_energy_pts)
	{
		std::array<std::string, 5> funny_attacks = {
		"\nYou're listening to 'Short-Range Damage Radio', spoiler bullets comming your way!",
		"\nYou really can double your fun! I will demonstrate with two rockets!",
		"\nI will cripple you with mean words, because everbody knows words do hurt!",
		"\nI cast magic missile and you can call me Gundalf! Avada kedavra!",
		"\nHow many ways can I say... THROWING GRENADE?! Doesn't matter I brought you a present: EXPLOSIONS!" };

		std::cout << funny_attacks[rand() % 5] << std::endl;
		std::cout << "[" << this->_name << "]" << " -- That hit " << target << " hard! Causing 60 hp damage" << std::endl;
		std::cout << "[" << this->_name << "]" << " -- You got " << this->_energy_pts << " energy points left" << std::endl;
	}
	else
	{
		this->_energy_pts += 25;
		std::cout << '\n' << "[" << this->_name << "]" << " -- I have many regrets! To weak to do this... Got " << this->_energy_pts << " energy points left" << std::endl;
	}
	return ;
}
