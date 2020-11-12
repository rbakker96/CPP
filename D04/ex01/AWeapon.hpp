/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:39:57 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/11 14:36:00 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_CLASS_H
#define AWEAPON_CLASS_H
#include <string>

class AWeapon
{

private:

protected:
	AWeapon();
	std::string _name;
	int 		_apcost;
	int 		_damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &src);
	AWeapon & operator=(AWeapon const &rhs);
	virtual ~AWeapon();

	const std::string getName() const;
	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;
};

#endif
