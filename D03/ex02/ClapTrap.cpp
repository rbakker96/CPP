/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 09:37:50 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/18 17:58:02 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <array>

ClapTrap::ClapTrap()
{
	std::cout << "[CLAPTRAP]" << " -- Building the basics ...." << std::endl;
	return ;
}


ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "[CLAPTRAP]";
	*this = src;
	return ;
}

ClapTrap &		ClapTrap::operator=(ClapTrap const &rhs)
{
	std::cout << "[CLAPTRAP]";
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

ClapTrap::~ClapTrap(void)
{
	std::cout << "[CLAPTRAP]" << " -- Deleting the remain parts ...." << std::endl;
	return ;
}


void		ClapTrap::rangeAttack(std::string const & target)
{
	std::cout << "That guy looks an awful lot like a " << target << "!"<< std::endl;
	std::cout << "[CLAPTRAP]";
	std::cout << "[" << this->_name << "]" << " attacks " << target << " at range" << ", causing " << this->_ranged_attack_dmg << " points of damage" << std::endl;
	return ;
}


void		ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "RUN FOR YOUR LIIIIIVES IT'S A " << target << "!"<< std::endl;
	std::cout << "[CLAPTRAP]";
	std::cout << "[" << this->_name << "]" << " attacks " << target << " with melee " << ", causing " << this->_melee_attack_dmg << " points of damage" << std::endl;
	return ;
}


void		ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_armor_dmg_reduction)
		std::cout << "[CLAPTRAP][" << this->_name << "]" << " -- Really?! Is that all you got? That didn't even hurt me!" << " Got " << this->_hit_pts << " hp left" <<std::endl;
	else
	{
		this->_hit_pts -= (amount - this->_armor_dmg_reduction);
		if (this->_hit_pts > 0)
			std::cout << "[CLAPTRAP][" << this->_name << "]" << " -- Extra ouch! That hurts!" << " Got " << this->_hit_pts << " hp left" <<std::endl;
		else
		{
			this->_hit_pts = 0;
			std::cout << "[CLAPTRAP][" << this->_name << "]" << " -- Huh, robot's don't do that...  I feel exploded " << " Got " << this->_hit_pts << " hp left" <<std::endl;
		}
	}
	return ;
}


void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_pts == this->_max_hit_pts)
		std::cout << "[CLAPTRAP][" << this->_name << "]" << " -- No thanks already got everything I need!" <<std::endl;
	else
	{
		this->_hit_pts += amount;
		if (this->_hit_pts > this->_max_hit_pts)
		{
			this->_hit_pts = this->_max_hit_pts;
			std::cout << "[CLAPTRAP][" << this->_name << "]" << " -- Sweet life juice!" << " Got " << this->_hit_pts << " hp right now" <<std::endl;
		}
		else
			std::cout << "[CLAPTRAP][" << this->_name << "]" << " -- Health over here!" << " Got " << this->_hit_pts << " hp right now" <<std::endl;
	}
	return ;
}
