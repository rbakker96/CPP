/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:46:57 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/12 13:56:36 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_CLASS_H
#define RADSCORPION_CLASS_H
#include "Enemy.hpp"

class RadScorpion : public Enemy
{

public:
	RadScorpion();
	RadScorpion(RadScorpion const &src);
    virtual ~RadScorpion();

	RadScorpion & operator=(RadScorpion const &rhs);
};

#endif
