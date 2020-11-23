/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:45:29 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/11 14:47:12 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_CLASS_H
#define POWERFIST_CLASS_H
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

public:
	PowerFist();
	PowerFist(PowerFist const &src);
    virtual ~PowerFist();

	PowerFist & operator=(PowerFist const &rhs);

	virtual void attack() const;
};

#endif
