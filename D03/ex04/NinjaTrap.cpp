/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 20:24:51 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/18 17:04:36 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>
#include <string>
#include <array>

NinjaTrap::NinjaTrap(void) : 	ClapTrap()
{
	this->_hit_pts = 60;
	this->_max_hit_pts = 60;
	this->_energy_pts = 120;
	this->_max_energy_pts = 120;
	this->_level = 1;
	this->_name = "NINJATRAP";
	this->_melee_attack_dmg = 60;
	this->_ranged_attack_dmg = 5;
	this->_armor_dmg_reduction = 0;

	std::cout << "[" << this->_name << "]";
	std::cout << " -- Constructed" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap()
{
	this->_hit_pts = 60;
	this->_max_hit_pts = 60;
	this->_energy_pts = 120;
	this->_max_energy_pts = 120;
	this->_level = 1;
	this->_name = name;
	this->_melee_attack_dmg = 60;
	this->_ranged_attack_dmg = 5;
	this->_armor_dmg_reduction = 0;

	std::cout << "[" << this->_name << "]";
	std::cout << " -- Constructed" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- Copy Constructed" << std::endl;
	*this = src;
	return ;
}

NinjaTrap &		NinjaTrap::operator=(NinjaTrap const &rhs)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- Assignment operator" << std::endl;
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

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "[" << this->_name << "]";
	std::cout << " -- Destructed" << std::endl;
	return ;
}

void			NinjaTrap::ninjaShoebox(ScavTrap & target)
{
	target.challengeNewcomer("Scavtrapped");
	return ;
}

void			NinjaTrap::ninjaShoebox(FragTrap & target)
{
	target.vaulthunter_dot_exe("Fragtrapped");
	return ;
}

void			NinjaTrap::ninjaShoebox(NinjaTrap & target)
{
	target.meleeAttack("Ninjatrapped");
	return ;
}
