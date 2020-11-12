/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:46:20 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/12 11:40:27 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_H
#define SUPERMUTANT_CLASS_H
#include "Enemy.hpp"

class SuperMutant : public Enemy
{

public:
	SuperMutant(void);
	SuperMutant(SuperMutant const &src);
    virtual ~SuperMutant(void);

	SuperMutant & operator=(SuperMutant const &rhs);

	void takeDamage(int damage);
};

#endif
