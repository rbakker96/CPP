/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 08:32:28 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/14 10:18:26 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
#define FRAGTRAP_CLASS_H
#include <string>

class FragTrap {

public:

    FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
    ~FragTrap(void);

	FragTrap & operator=(FragTrap const &rhs);

	void			rangeAttack(std::string const & target);
	void			meleeAttack(std::string const & target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);

	void			vaulthunter_dot_exe(std::string const & target);

private:
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
