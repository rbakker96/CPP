/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:45:52 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/12 10:49:52 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_H
#define ENEMY_CLASS_H
#include <string>

class Enemy
{

private:

protected:
	Enemy();
	int			_hp;
	std::string	_type;

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &src);
	Enemy & operator=(Enemy const &rhs);
	virtual ~Enemy();

	const std::string getType() const;
	int getHP() const;

	virtual void takeDamage(int damage);
};

#endif
