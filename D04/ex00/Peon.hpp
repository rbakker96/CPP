/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 10:59:09 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/10 15:38:44 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_H
#define PEON_CLASS_H
#include <string>
#include "Victim.hpp"

class Peon : public Victim
{

public:

	Peon();
	Peon(std::string name);
	Peon(Peon const &src);
    virtual ~Peon();

	Peon & operator=(Peon const &rhs);

	const std::string &		get_name() const;

	void getPolymorphed() const;
};

#endif
