/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/14 10:25:11 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/18 14:59:39 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_H
#define SCAVTRAP_CLASS_H
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:

    ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
    ~ScavTrap(void);

	ScavTrap & operator=(ScavTrap const &rhs);

	void			challengeNewcomer(std::string const & target);

};

#endif
