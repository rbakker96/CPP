/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:47:40 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/12 15:29:45 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_H
#define CHARACTER_CLASS_H
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{

private:

protected:
	Character();
	std::string		_name;
	int				_AP;
	AWeapon	*		_weapon;

public:
	Character(std::string const &name);
	Character(Character const &src);
    ~Character();

	Character & operator=(Character const &rhs);

	void				recoverAP();
	void				equip(AWeapon *weapon);
	void				attack(Enemy *enemy);
	const std::string 	getName() const;
	int 				getAP() const;
	const AWeapon *		getWeapon() const;
	const std::string	getWeaponName() const;
};

std::ostream & operator<<(std::ostream & out, Character const &character);

#endif
