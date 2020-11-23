/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: roybakker <roybakker@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/19 10:58:25 by roybakker     #+#    #+#                 */
/*   Updated: 2020/11/10 15:39:06 by roybakker     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_H
#define VICTIM_CLASS_H
#include <string>

class Victim {

protected:
	Victim();
	std::string		_name;

public:

	Victim(std::string name);
	Victim(Victim const &src);
    virtual ~Victim();

	Victim & operator=(Victim const &rhs);

	const std::string &		get_name() const;

	virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream & out, Victim const &src);

#endif
