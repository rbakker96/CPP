/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 08:32:28 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/18 14:59:49 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
#define FRAGTRAP_CLASS_H
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:

    FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
    ~FragTrap(void);

	FragTrap & operator=(FragTrap const &rhs);

	void			vaulthunter_dot_exe(std::string const & target);

};

#endif
