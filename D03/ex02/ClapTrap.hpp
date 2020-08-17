/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 09:38:03 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/17 14:36:47 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_CLASS_H
#define ClapTrap_CLASS_H
#include <string>

class ClapTrap
{

public:

	void			rangeAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

protected:

    ClapTrap();
	ClapTrap(ClapTrap const &src);
    ~ClapTrap(void);

	ClapTrap & operator=(ClapTrap const &rhs);

	int							_hit_pts;
	int							_max_hit_pts;
	int							_energy_pts;
	int							_max_energy_pts;
	unsigned int				_level;
	std::string					_name;
	unsigned int				_melee_attack_dmg;
	unsigned int				_ranged_attack_dmg;
	unsigned int				_armor_dmg_reduction;

};

#endif
