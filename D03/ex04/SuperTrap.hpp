/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/18 11:54:44 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/18 16:29:59 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_CLASS_H
#define SUPERTRAP_CLASS_H
#include <string>
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

public:

    SuperTrap(void);
	SuperTrap(std::string name);
	SuperTrap(SuperTrap const &src);
    ~SuperTrap(void);

	SuperTrap & operator=(SuperTrap const &rhs);

	void		vaulthunter_dot_exe(std::string const & target);
	void		ninjaShoebox(ScavTrap & target);
	void		ninjaShoebox(FragTrap & target);
	void		ninjaShoebox(NinjaTrap & target);

};

#endif
