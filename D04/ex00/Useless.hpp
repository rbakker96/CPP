/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Useless.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 10:22:51 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/11 10:24:57 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef USELESS_CLASS_H
#define USELESS_CLASS_H
#include <string>
#include "Victim.hpp"

class Useless : public Victim
{

public:

	Useless();
	Useless(std::string name);
	Useless(Useless const &src);
    virtual ~Useless();

	Useless & operator=(Useless const &rhs);

	const std::string &		get_name() const;

	void getPolymorphed() const;
};

#endif
