/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:44:38 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/11 14:28:46 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_H
#define PLASMARIFLE_CLASS_H
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &src);
    virtual ~PlasmaRifle();

	PlasmaRifle & operator=(PlasmaRifle const &rhs);

	virtual void attack() const;
};

#endif
