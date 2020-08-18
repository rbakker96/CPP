/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 11:54:34 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/18 16:53:53 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>
#include <string>
#include <array>

SuperTrap::SuperTrap(void) : FragTrap(), NinjaTrap()
{
	_hit_pts = FragTrap::_hit_pts;
	_max_hit_pts = FragTrap::_max_hit_pts;
	_energy_pts = NinjaTrap::_energy_pts;
	_max_energy_pts= NinjaTrap::_max_energy_pts;
	_level = NinjaTrap::_level;
	_name = "Super-Assassin";
	_melee_attack_dmg = NinjaTrap::_melee_attack_dmg;
	_ranged_attack_dmg = FragTrap::_ranged_attack_dmg;
	_armor_dmg_reduction = FragTrap::_armor_dmg_reduction;

	std::cout << "[" << this->FragTrap::_name << "]";
	std::cout << " -- Oh, it's on now!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(), NinjaTrap()
{
	_hit_pts = FragTrap::_hit_pts;
	_max_hit_pts = FragTrap::_max_hit_pts;
	_energy_pts = NinjaTrap::_energy_pts;
	_max_energy_pts= NinjaTrap::_max_energy_pts;
	_level = NinjaTrap::_level;
	_name = name;
	_melee_attack_dmg = NinjaTrap::_melee_attack_dmg;
	_ranged_attack_dmg = FragTrap::_ranged_attack_dmg;
	_armor_dmg_reduction = FragTrap::_armor_dmg_reduction;

	std::cout << "[" << this->FragTrap::_name << "]";
	std::cout << " -- I'm on a roll!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	std::cout << "[" << this->FragTrap::_name << "]";
	std::cout << "I'm made of magic!" << std::endl;
	*this = src;
	return ;
}

SuperTrap &		SuperTrap::operator=(SuperTrap const &rhs)
{
	std::cout << "[" << this->FragTrap::_name << "]";
	std::cout << " -- Ha! Keep 'em coming!" << std::endl;
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

SuperTrap::~SuperTrap(void)
{
	std::cout << "[" << this->FragTrap::_name << "]";
	std::cout << " -- No fair! I wasn't ready. I'm only level " << this->_level <<std::endl;
	return ;
}

void			SuperTrap::vaulthunter_dot_exe(std::string const & target)
{
	FragTrap::vaulthunter_dot_exe(target);
	return ;
}

void			SuperTrap::ninjaShoebox(ScavTrap & target)
{
	NinjaTrap::ninjaShoebox(target);
	return;
}

void			SuperTrap::ninjaShoebox(FragTrap & target)
{
	NinjaTrap::ninjaShoebox(target);
	return;
}

void			SuperTrap::ninjaShoebox(NinjaTrap & target)
{
	NinjaTrap::ninjaShoebox(target);
	return;
}
