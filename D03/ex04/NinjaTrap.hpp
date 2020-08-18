/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/17 20:24:39 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/18 14:21:13 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_CLASS_H
#define NINJATRAP_CLASS_H
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

public:

    NinjaTrap(void);
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);
    ~NinjaTrap(void);

	NinjaTrap & operator=(NinjaTrap const &rhs);

	void		ninjaShoebox(ScavTrap & target);
	void		ninjaShoebox(FragTrap & target);
	void		ninjaShoebox(NinjaTrap & target);

};

#endif
