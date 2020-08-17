/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/12 08:32:28 by roybakker     #+#    #+#                 */
/*   Updated: 2020/08/17 13:52:17 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
#define FRAGTRAP_CLASS_H
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
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
